/*
 * Author : JC
 * https://www.acmicpc.net/problem/15650
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
        for(int i=y+1; i<=n; i++){
            if(!visited[i]){
                visited[i] = true;
                arr[x] = i;
                dfs(x+1, i);
                visited[i] = false;
            }
        }
    }
}

int main(){
    cin >> n >> m;
    dfs(0, 0);

    return 0;
}
