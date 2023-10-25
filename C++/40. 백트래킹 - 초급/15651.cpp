/*
 * Author : JC
 * https://www.acmicpc.net/problem/15651
*/

#include <iostream>

using namespace std;

int n, m;
bool visited[9];
int arr[9];

void dfs(int x){
    if(x == m){
        for(int i=0; i<m; i++){
            cout << arr[i] << " ";
        }
        cout << "\n";
    }else{
        for(int i=1; i<=n; i++){
            visited[i] = true;
            arr[x] = i;
            dfs(x+1);
            visited[i] = false;
        }
    }
}

int main(){
    
    cin >> n >> m;
    dfs(0);

    return 0;
}
