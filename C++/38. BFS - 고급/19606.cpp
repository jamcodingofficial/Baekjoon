/*
 * Author : JC
 * https://www.acmicpc.net/problem/19606
*/

#include <iostream>
#include <queue>

using namespace std;

vector<pair<int,int>> vp[1000000];
bool visited[1001][1001];
int m, n;

void bfs(int x, int y){
    queue<pair<int, int>> qp;
    qp.push({x, y});
    visited[x][y] = true;
    while(!qp.empty()){
        pair<int,int> p = qp.front();
        qp.pop();
        for(int i=0; i<vp[p.first*p.second].size(); i++){
            
            int nx = vp[p.first*p.second][i].first;
            int ny = vp[p.first*p.second][i].second;
            if(nx == 1 && ny == 1){
                cout << "yes";
                exit(0);
            }
            if(visited[nx][ny] == false){
                visited[nx][ny] = true;
                qp.push({nx, ny});
            }
        }
    }
}

int main(){
    
    
    cin >> m >> n;
    
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            int t;
            cin >> t;
            vp[t].push_back({i+1, j+1});
        }
    }
    
    bfs(m, n);
    
    cout << "no";
    
    return 0;
}