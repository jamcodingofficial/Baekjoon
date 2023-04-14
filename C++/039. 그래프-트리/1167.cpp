/*
 * Author : JC
 * https://www.acmicpc.net/problem/1067
*/

#include <iostream>
#include <vector>
#include <memory.h>

using namespace std;
typedef pair<int,int> pii;

int v;
int a, b, c;
vector<pii> vp[100001];
bool visited[100001];
int node, weight;

void dfs(int x, int y){ 
    visited[x] = true; 
    if(weight < y){
        weight = y; 
        node = x; 
    }
    for(int i=0; i<vp[x].size(); i++){ 
        if(!visited[vp[x][i].first]){ 
            dfs(vp[x][i].first, y + vp[x][i].second);
        }
    }
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    cin >> v;
    for(int i=0; i<v; i++){
        cin >> a;
        while(1){
            cin >> b;
            if(b == -1){
                break;
            }
            cin >> c;
            vp[a].push_back({b, c});
        }

    }
    dfs(2, 0);
    memset(visited, 0, sizeof(visited));
    dfs(node, 0);
    
    cout << weight;
    
    return 0;
}