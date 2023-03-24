#include <iostream>
#include <vector>
#define MAX 10001

using namespace std;

vector<int> v[MAX];
bool visited[MAX];
int P[MAX], D[MAX];
int n;

void get_info(int u, int d){
    visited[u] = true;
    for(int i=0; i<v[u].size(); i++){
        if(!visited[v[u][i]]){
            P[v[u][i]] = u;
            D[v[u][i]] = d + 1;
            get_info(v[u][i], d + 1);
        }
    }
}

void print(int u){
    cout << "node: " << u << ": ";
    cout << "parent ";
    if(u == 0) cout << -1 << ", ";
    else cout << P[u] << ", ";
    
    cout << "depth = " << D[u] << ",";
    
    if(u == 0) cout << "root, ";
    else if(v[u].size() == 0) cout << "leaf, ";
    else cout << "internal node, ";
    
    cout << "[";
    for(int i=0; i<v[u].size(); i++){
        if(i == v[u].size() - 1){
            cout << v[u][i];
        }else{
            cout << v[u][i] << ",";
        }
    }
    cout << "]\n";
    
}

int main(){
    
    cin >> n;
    for(int i=0; i<n; i++){
        int id, k, c;
        cin >> id >> k;
        for(int j=0; j<k; j++){
            cin >> c;
            v[id].push_back(c);
        }
    }
    get_info(0, 0);
    
    for(int i=0; i<n; i++){
        print(i);
    }

    return 0;
}