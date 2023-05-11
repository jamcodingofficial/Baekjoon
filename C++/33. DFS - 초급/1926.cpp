/*
 * Author : JC
 * https://www.acmicpc.net/problem/1926
*/

#include <iostream>

using namespace std;

int arr[500][500];
bool visited[500][500];
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};
int n, m, cnt;

void dfs(int x, int y){
    cnt++;
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

    cin >> n >> m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> arr[i][j];
        }
    }
    int area = 0;
    int check = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j] == 1 && visited[i][j] == false){
                check++;
                cnt = 0;
                dfs(i, j);
                area = max(area, cnt);
            }
        }
    }
    
    cout << check << "\n";
    cout << area;
    
    return 0;
}