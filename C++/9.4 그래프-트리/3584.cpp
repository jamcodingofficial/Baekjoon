/*
 * Author : JC
 * https://www.acmicpc.net/problem/3584
*/

#include <iostream>
#include <vector>
#include <string.h>

using namespace std;

int tc, n, a, b, u, v;
bool visited[10001];
int arr[10001];

int main(){
    
    cin >> tc;
    while(tc--){
        cin >> n;
        for(int i=1; i<=n; i++){
            arr[i] = i;
        }
        while(--n){
            cin >> a >> b;
            arr[b] = a;
        }
        cin >> u >> v; 
        visited[u] = true;
        while(u != arr[u]){ 
            u = arr[u]; 
            visited[u] = true;
        }
        
        while(!visited[v]){ 
            v = arr[v];
        }
        cout << v << "\n";
        memset(visited, 0, sizeof(visited));
    }

    return 0;
}