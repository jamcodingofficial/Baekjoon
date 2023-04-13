#include <iostream>
#include <vector>

using namespace std;

int n;
vector<int> v[100001];
bool visited[100001];
int res[100001];

void dfs(int x){
    visited[x] = true;
    for(int i=0; i<v[x].size(); i++){
        if(!visited[v[x][i]]){
            res[v[x][i]] = x;
            dfs(v[x][i]);
        }
    }
}

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    cin >> n;
    for(int i=0; i<n-1; i++){
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    
    dfs(1);

    for(int i=2; i<=n; i++){
        cout << res[i] << "\n";
    }
        
    return 0;
}