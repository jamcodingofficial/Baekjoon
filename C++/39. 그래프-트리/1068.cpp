/*
 * Author : JC
 * https://www.acmicpc.net/problem/1068
*/

#include <iostream>
#include <vector>

using namespace std;

vector<int> v[50];
bool visited[50];
int n, m, ans;

void dfs(int node){ 
    visited[node] = true;
    int cntnode = 0;
    for(int i=0; i<v[node].size(); i++){ 
        int next = v[node][i];
        if(!visited[next] && next != m){
            cntnode++;
            dfs(next);
        }
    }
    if(cntnode == 0){
        ans++;
    }
}

int main(){

    cin >> n;
  
    int root;
    for(int i=0; i<n; i++){
        int t;
        cin >> t;
        if(t == -1){
            root = i;
        }else{
            v[t].push_back(i);
        }
    }
    cin >> m;
    if(m == root){
        cout << 0;
        return 0;
    }
    dfs(root);
    cout << ans;

    return 0;
}