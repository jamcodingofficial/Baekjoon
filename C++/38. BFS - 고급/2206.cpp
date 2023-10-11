/*
 * Author : JC
 * https://www.acmicpc.net/problem/2206
*/

#include <iostream>
#include <queue>

using namespace std;

typedef struct _Datas{
    int x, y, wall;
}Datas;

int arr[1001][1001], path[1001][1001];
bool visited[1001][1001][2];
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
queue<Datas> q;

int main(){
    int n, m;
    cin >> n >> m;
    if(n == 1 && m == 1){
        cout << 1;
        return 0;
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            scanf("%1d", &arr[i][j]);
        }
    }
    
    visited[1][1][0] = visited[1][1][1] = 1;
    path[1][1] = 1;
    q.push({1, 1, 0});
    
    while(!q.empty()){
        int x = q.front().x; 
        int y = q.front().y; 
        int wall = q.front().wall;
        q.pop();
        for(int i=0; i<4; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(1<=x && x<=n && 1<=y && y<=m){
                if(arr[nx][ny] && !wall && !visited[nx][ny][1]){
                    visited[nx][ny][wall+1] = true;
                    q.push({nx, ny, 1});
                    path[nx][ny] = path[x][y] + 1;
                }else if(!arr[nx][ny] && !visited[nx][ny][wall]){
                    visited[nx][ny][wall] = true;
                    q.push({nx, ny, wall});
                    path[nx][ny] = path[x][y] + 1;
                }
                if(nx == n && ny == m){
                    cout << path[nx][ny];
                    return 0;
                }
            }
        }
    }
    cout << -1;

    return 0;
}