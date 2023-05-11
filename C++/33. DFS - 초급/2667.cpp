/*
 * Author : JC
 * https://www.acmicpc.net/problem/2667
*/

#include <iostream>
#include <algorithm>

using namespace std;

int arr[25][25];
bool visited[25][25];
int res[25*25];
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};
int n, cnt;

void dfs(int x, int y){
    visited[x][y] = true;
    res[cnt]++;
    for(int i=0; i<4; i++){
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(0<=nx && nx<n && 0<=ny && ny<n){
            if(arr[nx][ny] == 1 && visited[nx][ny] == false){
                dfs(nx, ny);
            }
        }
    }
}

int main(){

    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%1d", &arr[i][j]);
        }
    }
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[i][j] == 1 && visited[i][j] == false){
                cnt++;
                dfs(i, j);
            }
        }
    }
    
    sort(res+1, res+cnt+1);
    cout << cnt << "\n";
    for(int i=1; i<=cnt; i++){
        cout << res[i] << "\n";
    }
    
    return 0;
}
