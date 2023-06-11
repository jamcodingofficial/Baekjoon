/*
 * Author : JC
 * https://www.acmicpc.net/problem/11724
*/

// 인접행렬 구현
#include <iostream>

using namespace std;

int arr[1001][1001];
bool check[1001];
int n, m, c;

void dfs(int d){ 
    check[d] = true;
    for(int i=1; i<=n; i++){
        if(arr[d][i] == 1 && check[i] == false){
            dfs(i);
        }
    }
}

int main(){
    cin >> n >> m;
    for(int i=0; i<m; i++){
        int a, b;
        cin >> a >> b;
        arr[a][b] = 1;
        arr[b][a] = 1;
    }

    for(int i=1; i<=n; i++){
        if(check[i] == false){
            dfs(i);
            c++;
        }
    }

    cout << c;

    return 0;
}

// 인접 리스트 구현
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> vec[1001];
bool visited[1001];
int n, m, cnt;

void dfs(int node){
    visited[node] = true;
    for(int i=0; i<vec[node].size(); i++){
        if(!visited[vec[node][i]]){
            dfs(vec[node][i]);
        }
    }
}

int main(){
    cin >> n >> m;
    for(int i=0; i<m; i++){
        int u, v;
        cin >> u >> v;
        vec[u].push_back(v);
        vec[v].push_back(u);
    }
    for(int i=1; i<=n; i++){
        sort(vec[i].begin(), vec[i].end());
    }

    for(int i=1; i<=n; i++){
        if(!visited[i]){
            dfs(i);
            cnt++;
        }
    }
    
    cout << cnt;
            
    return 0;
}