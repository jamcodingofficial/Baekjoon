/*
 * Author : JC
 * https://www.acmicpc.net/problem/2606
*/

// 인접행렬 구현
#include <iostream>

using namespace std;

int computer[101][101];
bool visited[101];
int cnt = 0;
int c, p;

void dfs(int x){
    visited[x] = true;
    for(int i=1; i<=c; i++){
        if(computer[x][i] == 1 && visited[i] == false){
            cnt++;
            dfs(i);
        }
    }
}

int main(){
    cin >> c;
    cin >> p;
    for(int i=0; i<p; i++){
        int x, y;
        cin >> x >> y;
        computer[x][y] = 1;
        computer[y][x] = 1;
    }
    
    dfs(1);
    cout << cnt;
    
    return 0;
}

// 인접 리스트 구현
#include <iostream>
#include <vector>

using namespace std;

vector<int> v[101];
bool visited[101];
int cnt;
int n, m;

void dfs(int node){
    visited[node] = true;
    for(int i=0; i<v[node].size(); i++){
        if(!visited[v[node][i]]){
            cnt++;
            dfs(v[node][i]);
        }
    }
}

int main(){
    
    cin >> n >> m;
    for(int i=0; i<m; i++){
        int x, y;
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    
    dfs(1);
    cout << cnt;

    return 0;
}