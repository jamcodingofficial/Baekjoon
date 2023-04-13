#include <iostream>

using namespace std;

int computer[101][101];
bool visited[101];
int cnt = 0;
int c, p;

void dfs(int x){
    visited[x] = true;
    for(int i=1; i<=c; i++){
        if(computer[x][i] == 1 && visited[i] == false){
            cnt++;
            dfs(i);
        }
    }
}

int main(){
    cin >> c;
    cin >> p;
    for(int i=0; i<p; i++){
        int x, y;
        cin >> x >> y;
        computer[x][y] = 1;
        computer[y][x] = 1;
    }
    
    dfs(1);
    cout << cnt;
    
    return 0;
}