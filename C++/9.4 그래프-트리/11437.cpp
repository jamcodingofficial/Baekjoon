#include <iostream>
#include <vector>
#include <algorithm>
 
using namespace std;

vector<int> v[50001];
int p[50001], l[50001];

void set_tree(int x, int y){
    p[x] = y;
    l[x] = l[y] + 1;
    for(int i=0; i<v[x].size(); i++){
        int c = v[x][i];
        if(c == y) continue;
        set_tree(c, x);
    }
}

int check(int x, int y){
    
    if(l[x] < l[y]){
        swap(x, y);
    }
    while(l[x] != l[y]){
        x = p[x];
    }
    while(x != y){
        x = p[x];
        y = p[y];
    }
    return x;
}

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    int n, a, b;
    cin >> n;
    for(int i=0; i<n-1; i++){
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    
    set_tree(1, 0);
    int m;
    cin >> m;
    for(int i=0; i<m; i++){
        cin >> a >> b; 
        cout << check(a, b) << "\n";
    }
    
    return 0;
}