/*
 * Author : JC
 * https://www.acmicpc.net/problem/14267
*/

#include <iostream>
#include <vector>

using namespace std;

vector<int> v[100001];
int c[100001];
int n, m;

void dfs(int x){
    for(int i=0; i<v[x].size(); i++){ 
        int next = v[x][i]; 
        c[next] = c[next] + c[x]; 
        dfs(next);
    }
}

int main(){
    
    cin >> n >> m;
    for(int i=1; i<=n; i++){ 
        int t;
        cin >> t; 
        if(t == -1) continue;
        v[t].push_back(i);
    }
    
    
    for(int i=0; i<m; i++){
        int x, y;
        cin >> x >> y;
        c[x] += y;
    }

    
    dfs(1);
    
    for(int i=1; i<=n; i++){
        cout << c[i] << " ";
    }
    
    return 0;
}