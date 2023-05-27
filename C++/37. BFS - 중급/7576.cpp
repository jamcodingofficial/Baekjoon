/*
 * Author : JC
 * https://www.acmicpc.net/problem/7576
*/

#include <iostream>
#include <queue>

using namespace std;
typedef pair<int, int> pii;

int arr[1000][1000];
bool visited[1000][1000];
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
int m, n;
queue<pii> qp;

void bfs(){
    while(!qp.empty()){
        pii p = qp.front();
        qp.pop();
        for(int i=0; i<4; i++){
            int nx = p.first + dx[i];
            int ny = p.second + dy[i];
            if(0<=nx && nx<n && 0<=ny && ny<m){
                if(!visited[nx][ny] && arr[nx][ny] == 0){
                    qp.push({nx, ny});
                    arr[nx][ny] = arr[p.first][p.second] + 1;
                    visited[nx][ny] = true;
                }
            }
        }
    }
}

int main(){
    
    cin >> m >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> arr[i][j];
            if(arr[i][j] == 1){
                qp.push({i, j});
            }
        }
    }
    visited[qp.front().first][qp.front().second] = true;
    bfs();
    
    bool check = false;
    int ans = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j] == 0){
                check = true;
            }
            ans = max(ans, arr[i][j]);
        }
    }
    if(check){
        cout << -1;
    }else{
        cout << ans - 1;
    }
    
    return 0;
}
