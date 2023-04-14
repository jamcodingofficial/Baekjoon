/*
 * Author : JC
 * https://www.acmicpc.net/problem/1967
*/

#include <iostream>
#include <vector>
#include <memory.h>

using namespace std;

typedef pair<int,int> pii;

int n;
vector<pii> v[10001];
bool visited[10001];
int res;

void dfs(int x, int y){
    res = max(res, y);
    visited[x] = true;
    for(int i=0; i<v[x].size(); i++){
        if(!visited[v[x][i].first]){
            dfs(v[x][i].first, y + v[x][i].second);
        }
    }
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    
    cin >> n;
    for(int i=0; i<n-1; i++){
        int a, b, c;
        cin >> a >> b >> c;
        v[a].push_back({b, c});
        v[b].push_back({a, c});
    }

    for(int i=1; i<=n; i++){
        dfs(i, 0);
        memset(visited, 0, sizeof(visited));
    }

    cout << res;
 
    return 0;   
}