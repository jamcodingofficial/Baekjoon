/*
 * Author : JC
 * https://www.acmicpc.net/problem/2589
*/

#include <iostream>
#include <queue>
#include <string.h>

using namespace std;

string s[50];
bool visited[50][50];
int path[50][50];
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
int l, w;

int bfs(int x, int y){
    int cnt = 0;
    queue<pair<int,int>> qp;
    qp.push({x, y});
    while(!qp.empty()){
        pair<int,int> p = qp.front();
        qp.pop();
        for(int i=0; i<4; i++){
            int nx = p.first + dx[i];
            int ny = p.second + dy[i];
            cnt = max(cnt, path[p.first][p.second]);
            if(0<=nx && nx<l && 0<=ny && ny<w){
                if(s[nx][ny] == 'L' && !visited[nx][ny]){
                    qp.push({nx, ny});
                    visited[nx][ny] = true;
                    path[nx][ny] = path[p.first][p.second] + 1;
                }
            }
        }
    }
    return cnt;
}
int main(){
    
    cin >> l >> w;
    for(int i=0; i<l; i++){
        cin >> s[i];
    }

    int ans = 0;
    for(int i=0; i<l; i++){
        for(int j=0; j<w; j++){
            if(s[i][j] == 'L'){
                visited[i][j] = true;
                ans = max(ans, bfs(i, j));
                memset(visited, false, sizeof(visited));
                memset(path, 0, sizeof(path));
            }
        }
    }
    cout << ans;
    
    return 0;
}