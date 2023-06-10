/*
 * Author : JC
 * https://www.acmicpc.net/problem/1260
*/

// 인접행렬 구현
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


// 인접 리스트 구현
#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <string.h>

using namespace std;

vector<int> vec[1001];
bool visited[1001];

void dfs(int node){
    cout << node << " ";
    visited[node] = true;
    for(int i=0; i<vec[node].size(); i++){
        if(!visited[vec[node][i]]){
            dfs(vec[node][i]);
        }
    }
}


queue<int> q;
void bfs(int node){
    cout << node << " ";
    visited[node] = true;
    q.push(node);
    while(!q.empty()){
        int p = q.front();
        q.pop();
        for(int i=0; i<vec[p].size(); i++){
            if(!visited[vec[p][i]]){
                q.push(vec[p][i]);
                cout << vec[p][i] << " ";
                visited[vec[p][i]] = true;
            }
        }
    }
}

int main(){
    int n, m, v;
    cin >> n >> m >> v;
    for(int i=0; i<m; i++){
        int x, y;
        cin >> x >> y;
        vec[x].push_back(y);
        vec[y].push_back(x);
    }

    
    for(int i=1; i<=n; i++){
        if(!vec[i].empty()){
            sort(vec[i].begin(), vec[i].end());
        }
    }
    
    dfs(v);
    cout << "\n";
    memset(visited, false, sizeof(visited));
    bfs(v);
}
