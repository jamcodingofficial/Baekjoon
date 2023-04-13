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