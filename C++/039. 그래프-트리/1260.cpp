/*
 * Author : JC
 * https://www.acmicpc.net/problem/1260
*/

#include <iostream>
#include <string.h>
#include <queue>

using namespace std;

int map[1001][1001];
bool visited[1001];
int n, m, v;

void dfs(int d){
    visited[d] = true;
    cout << d << " ";
    for(int i=1; i<=n; i++){
        if(map[d][i] == 1 && visited[i] == false){
            dfs(i);
        }
    }
}

queue<int> q;
void bfs(int b){
    visited[b] = true; 
    q.push(b);
    while(!q.empty()){
        int t = q.front();
        cout << t << " ";
        q.pop();
        for(int i=1; i<=n; i++){
            if(map[t][i] == 1 && visited[i] == false){
                visited[i] = true;
                q.push(i);
            }
        }
    }
}
int main(){
    cin >> n >> m >> v;
    
    for(int i=0; i<m; i++){
        int a, b;
        cin >> a >> b;
        map[a][b] = 1;
        map[b][a] = 1;
    }
    
    dfs(v);
    memset(visited, 0, sizeof(visited));
    cout << "\n";
    bfs(v);

    return 0;
}