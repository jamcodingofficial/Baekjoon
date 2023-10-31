/*
 * Author : JC
 * https://www.acmicpc.net/problem/1987
*/

#include <iostream>

using namespace std;

int r, c;
char arr[20][21];
bool visited[27];
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
int res;

void dfs(int x, int y, int cnt){
    res = max(res, cnt);
    for(int i=0; i<4; i++){
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(0<=nx && nx<r && 0<=ny && ny<c){
            if(!visited[arr[nx][ny] - 'A']){
                visited[arr[nx][ny] - 'A'] = true;
                dfs(nx, ny, cnt+1);
                visited[arr[nx][ny] - 'A'] = false;
            }
        }
    }
}

int main(){
    cin >> r >> c;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin >> arr[i][j];
        }
    }

    visited[arr[0][0]-'A'] = true;
    
    dfs(0, 0, 1);
    
    cout << res;
    
    return 0;   
}