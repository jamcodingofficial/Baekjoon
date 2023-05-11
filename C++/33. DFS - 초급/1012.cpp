/*
 * Author : JC
 * https://www.acmicpc.net/problem/1012
*/

#include <iostream>
#include <string.h>

using namespace std;

int arr[50][50];
bool visited[50][50];
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};
int n, m, k;

void dfs(int x, int y){
    visited[x][y] = true;
    for(int i=0; i<4; i++){
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(0<=nx && nx<n && 0<=ny && ny<m){
            if(arr[nx][ny] == 1 && visited[nx][ny] == false){
                dfs(nx, ny);
            }
        }
    }
}

int main(){

    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        cin >> n >> m >> k;
        for(int j=0; j<k; j++){
            int x, y;
            cin >> x >> y;
            arr[x][y] = 1;
        }
        int cnt = 0;
        for(int j=0; j<n; j++){
            for(int k=0; k<m; k++){
                if(arr[j][k] == 1 && visited[j][k] == false){
                    cnt++;
                    dfs(j, k);
                }
            }
        }
        cout << cnt << "\n";
        memset(visited, false, sizeof(visited));
        memset(arr, 0, sizeof(arr));
    }
    
    return 0;
}