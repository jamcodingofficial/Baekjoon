#include <iostream>
#include <string.h>

using namespace std;

int map[100][100];
bool visited[100][100];
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
int n, c, r=1;

void dfs(int x, int y){
    visited[x][y] = true;
    for(int i=0; i<4; i++){
        int a = x + dx[i];
        int b = y + dy[i];
        if(0<=a && a<n && 0<=b && b<n){
            if(map[a][b] != 0 && visited[a][b] == false){
                dfs(a,b);
            }
        }
    }
}

int main(){
    int minNumber = 100;
    int maxNumber = 0;
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> map[i][j];
            maxNumber = max(maxNumber, map[i][j]);
            minNumber = min(minNumber, map[i][j]);
        }
    }
    
    for(int i=minNumber; i<=maxNumber; i++){ 
        c = 0;
        for(int j=0; j<n; j++){
            for(int k=0; k<n; k++){
                if(map[j][k] <= i){
                    map[j][k] = 0;
                 }
            }
        }
    
        for(int j=0; j<n; j++){
            for(int k=0; k<n; k++){
                if(map[j][k] != 0 && visited[j][k] == false){
                    c++;
                    dfs(j, k);
                }
            }
        }
        if(r<c){
            r = c;
        }
        memset(visited, 0, sizeof(visited));
    }
    cout << r;

    return 0;
}
