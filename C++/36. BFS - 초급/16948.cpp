/*
 * Author : JC
 * https://www.acmicpc.net/problem/16948
*/

#include <iostream>
#include <queue>

using namespace std;
typedef pair<int, int> pii;

int map[200][200];
bool visited[200][200];
int dx[] = {-2, -2, 0, 0, 2, 2};
int dy[] = {-1, 1, -2, 2, -1, 1};
int n, r1, c1, r2, c2;
queue<pii> qp;

void bfs(int x, int y){
    visited[x][y] = true;
    qp.push({x,y});
    while(!qp.empty()){
        pii p;
        p = qp.front();
        qp.pop();
        for(int i=0; i<6; i++){
            int nx = p.first + dx[i];
            int ny = p.second + dy[i];
            if(0<=nx && nx<n && 0<=ny && ny<n){
                if(!visited[nx][ny]){
                    map[nx][ny] = map[p.first][p.second] + 1;
                    qp.push({nx, ny});
                    if(nx==r2 && ny == c2) return;
                    visited[nx][ny] = true;
                }
            }
        }
    }
}
int main(){
    cin >> n;
    cin >> r1 >> c1 >> r2 >> c2;
    bfs(r1, c1);
    if(qp.empty()){
        cout << -1;
    }else{
        cout << map[r2][c2];
    }
    
    return 0;
}