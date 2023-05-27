
/*
 * Author : JC
 * https://www.acmicpc.net/problem/7562
*/

#include <iostream>
#include <queue>
#include <string.h>

using namespace std;
typedef pair<int,int> pii;

int map[300][300];
bool visited[300][300];
int dx[] = {-2, -2, -1, 1, 2, 2, 1, -1};
int dy[] = {-1, 1, 2, 2, 1, -1, -2, -2};
int l;
int x1, y1, x2, y2;

int bfs(int x, int y){
    queue<pii> qp;
    qp.push({x, y});
    visited[x][y] = true;
    while(!qp.empty()){
        pii p = qp.front();
        qp.pop();
        for(int i=0; i<8; i++){
            int nx = p.first + dx[i];
            int ny = p.second + dy[i];
            if(0<=nx && nx<l && 0<=ny && ny<l){
                if(!visited[nx][ny]){
                    visited[nx][ny] = true;
                    map[nx][ny] = map[p.first][p.second] + 1;
                    qp.push({nx, ny});
                    if(nx == x2 && ny == y2){
                        return map[nx][ny];
                    }
                }
            }
        }
    }
    return 0;
}

int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        cin >> l;
        cin >> x1 >> y1 >> x2 >> y2;
        cout << bfs(x1, y1) << "\n";
        memset(visited, false, sizeof(visited));
        memset(map, 0, sizeof(map));
    }

    return 0;
}
