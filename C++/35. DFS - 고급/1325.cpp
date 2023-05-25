/*
 * Author : JC
 * https://www.acmicpc.net/problem/1325
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>

using namespace std;
typedef pair<int,int> pii;

vector<int> v[10001];
vector<pii> res;
bool visited[10001];
int cnt;

bool cmp(pii x, pii y){
    if(x.first == y.first){
        return x.second < y.second;
    }else{
        return x.first > y.first;
    }
}

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
    int n, m;
    cin >> n >> m;
    
    for(int i=0; i<m; i++){
        int x, y;
        cin >> x >> y;
        v[y].push_back(x);
    }
                    
    for(int i=1; i<=n; i++){
        if(!v[i].empty()){
            dfs(i);
            res.push_back({cnt, i});
            cnt = 0;
            memset(visited, false, sizeof(visited));
        }
    }
        
    sort(res.begin(), res.end(), cmp);
    
    int flag = res[0].first;
    
    for(int i=0; i<res.size(); i++){
        if(flag == res[i].first){
            cout << res[i].second << " ";
        }else{
            break;
        }
    }

}
