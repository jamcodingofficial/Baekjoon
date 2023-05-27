/*
 * Author : JC
 * https://www.acmicpc.net/problem/21736
*/

#include <iostream>
#include <queue>

using namespace std;

char str[601][601];
bool visited[601][601];
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
int n, m;
int cnt;

void bfs(int x, int y){
    queue<pair<int,int>> qp;
    qp.push({x, y});
    visited[x][y] = true;
    while(!qp.empty()){
        pair<int,int> p = qp.front();
        qp.pop();
        for(int i=0; i<4; i++){
            int nx = p.first + dx[i];
            int ny = p.second + dy[i];
            if(0<=nx && nx<n && 0<=ny && ny<m){
                if(!visited[nx][ny] && str[nx][ny] != 'X'){
                    if(str[nx][ny] == 'P'){
                        cnt++;
                    }
                    qp.push({nx, ny});
                    visited[nx][ny] = true;
                }
            }
        }
    }
}

int main(){
    
    cin >> n >> m;
    int x = 0, y = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> str[i][j];
            if(str[i][j] == 'I'){
                x = i;
                y = j;
            }
        }
    }
    
    bfs(x, y);
    
    if(cnt == 0){
        cout << "TT";
    }else{
        cout << cnt;
    }
    
    return 0;
}