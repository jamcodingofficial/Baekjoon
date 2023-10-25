/*
 * Author : JC
 * https://www.acmicpc.net/problem/15652
*/

#include <iostream>

using namespace std;

bool visited[9];
int arr[9];
int n, m;

void dfs(int x, int y){
    if(x == m){
        for(int i=0; i<m; i++){
            cout << arr[i] << " ";
        }
        cout << "\n";
    }else{
        for(int i=y; i<=n; i++){
                visited[i] = true;
                arr[x] = i;
                dfs(x+1, i);
                visited[i] = false;
        }
    }
}

int main(){
    
    cin >> n >> m; 
    dfs(0, 1);

    return 0;
}
