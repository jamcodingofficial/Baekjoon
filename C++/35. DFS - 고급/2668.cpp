/*
 * Author : JC
 * https://www.acmicpc.net/problem/2668
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>

using namespace std;

int arr[101];
bool visited[101];

int dfs(int x, int y){
    if(!visited[x]){
        visited[x] = true;
        return dfs(arr[x], y);
    }else{
        if(x == y){
            return 1;
        }else{
            return 0;
        }
    }
}

int main(){
    int n;
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> arr[i];
    }
    
    vector<int> v;
    for(int i=1; i<=n; i++){
        if(dfs(i, i)){
            v.push_back(i);
        }
        memset(visited, false, sizeof(visited));
    }
    
    sort(v.begin(), v.end());
    cout << v.size() << "\n";
    for(int i=0; i<v.size(); i++){
        cout << v[i] << "\n";
    }
    
    return 0;   
}