/*
 * Author : JC
 * https://www.acmicpc.net/problem/18352
*/

#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

int n, m, k, x;
vector<int> vp[300001];
bool visited[300001];
queue<pair<int,int>> qp;
vector<int> res;

void bfs(){
    qp.push({x, 0});
    visited[x] = true;
    while(!qp.empty()){
        int a = qp.front().first; 
        int b = qp.front().second; 
        if(b == k){
            res.push_back(a);
        }
        qp.pop();
        for(int i=0; i<vp[a].size(); i++){
            if(!visited[vp[a][i]]){
                visited[vp[a][i]] = true; 
                qp.push({vp[a][i], b+1}); 
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    
    cin >> n >> m >> k >> x;
    for(int i=0; i<m; i++){
        int a, b;
        cin >> a >> b;
        vp[a].push_back(b);
    }
    bfs();
    sort(res.begin(), res.end());
    
    if(res.empty()) cout << -1;
    else{
        for(auto elem : res){
            cout << elem << "\n";
        }
    }

    return 0;
}