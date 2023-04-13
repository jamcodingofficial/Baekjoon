#include <iostream>
#include <vector>

using namespace std;
vector<int> v[51];
bool visited[51];
int n, t, r;
int answer;

void dfs(int x){ 
    visited[x] = true; 
    int cNode = 0;
    for(int i=0; i<v[x].size(); i++){ 
        if(!visited[v[x][i]] && v[x][i] != t){
            cNode++;
            dfs(v[x][i]);
        }
    }
    if(cNode == 0){
        answer++; 
    }
}

int main(){
        
    cin >> n;
    for(int i=0; i<n; i++){ 
        cin >> t; 
        if(t != -1){
            v[t].push_back(i);
        }else{
            r = i;
        }
    }

    cin >> t;
    if(t == r){
        cout << 0;
        return 0;
    }
    dfs(r);
    cout << answer;
    
    return 0;
}