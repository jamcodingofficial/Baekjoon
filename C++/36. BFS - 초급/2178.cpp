/*
 * Author : JC
 * https://www.acmicpc.net/problem/2178
*/

#include <iostream>
#include <queue>

using namespace std;

typedef pair<int, int> pii;
int arr[101][101];
bool visited[101][101];
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
int n, m;

void bfs(int x, int y){
    queue<pii> q;
    q.push({x, y});
    while(!q.empty()){
        pii p = q.front();
        q.pop();
        visited[p.first][p.second] = true;
        for(int i=0; i<4; i++){
            int nx = p.first + dx[i];
            int ny = p.second + dy[i];
            if(0<nx && nx<=n && 0<ny && ny<=m){
                if(arr[nx][ny] == 1 && visited[nx][ny] == false){
                    q.push({nx, ny});
                    arr[nx][ny] += arr[p.first][p.second];
                }
            }
        }
    }
}

int main(){
    
    cin >> n >> m;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            scanf("%1d", &arr[i][j]);
        }
    }
    
    bfs(1, 1);
    
    cout << arr[n][m];
1
    return 0;
}
