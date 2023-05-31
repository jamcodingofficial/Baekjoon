/*
 * Author : JC
 * https://www.acmicpc.net/problem/16928
*/

#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int arr[101];
int ans[101];

int main(){
    int n, m;
    cin >> n >> m;
    for(int i=0; i<n+m; i++){
        int x, y;
        cin >> x >> y;
        arr[x] = y;
    }
    
    fill(ans, ans+101, 1e9);
    ans[1] = 0;
    
    queue<int> q;
    q.push(1);
    
    while(!q.empty()){
        int tmp = q.front();
        q.pop();
        for(int i=1; i<=6; i++){
            if(tmp + i <= 100){
                int nxt = tmp + i;
                if(arr[nxt] != 0){
                    nxt = arr[nxt];
                }
                if(ans[nxt] == 1e9){
                    ans[nxt] = ans[tmp] + 1;
                    q.push(nxt);
                }
            }
        }
    }
    cout << ans[100];

    return 0;
}