/*
 * Author : JC
 * https://www.acmicpc.net/problem/1182
*/

#include <iostream>

using namespace std;

int arr[20];
int n, s, cnt;

void dfs(int x, int y){
    if(y == s) cnt++;
    for(int i=x+1; i<n; i++){
        dfs(i, y + arr[i]);
    }
}
int main(){
    
    cin >> n >> s;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    
    for(int i=0; i<n; i++){
        dfs(i, arr[i]);
    }
    
    cout << cnt;
    
    return 0;
}