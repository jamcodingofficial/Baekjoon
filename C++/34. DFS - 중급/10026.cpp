/*
 * Author : JC
 * https://www.acmicpc.net/problem/10026
*/

#include <iostream>
#include <string.h>

using namespace std;

int n;
char map[101][101];
bool visited[101][101];
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
int r, r2;

void dfs(int x, int y){
    visited[x][y] = true;
    for(int i=0; i<4; i++){
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(0<=nx && nx < n && 0<=ny && ny<n){
            if(map[x][y] == map[nx][ny] && visited[nx][ny] == false){
                dfs(nx, ny);
            }
        }
    }
}

int main(){
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>> map[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(visited[i][j] == false){
                r++;
                dfs(i, j);
            }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(map[i][j] == 'R'){
                map[i][j] = 'G';
            }
        }
    }
    memset(visited, 0, sizeof(visited));
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(visited[i][j] == false){
                r2++;
                dfs(i, j);
            }
        }
    }
    cout << r << " " << r2;
    
    return 0;
}
