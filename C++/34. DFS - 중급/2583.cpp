/*
 * Author : JC
 * https://www.acmicpc.net/problem/2583
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int arr[101][101];
bool visited[101][101];
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
int m, n, k;
int cnt;

void dfs(int x, int y){
    cnt++;
    visited[x][y] = true;
    for(int i=0; i<4; i++){
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(0<=nx && nx<m && 0<=ny && ny<n){
            if(arr[nx][ny] == 0 && !visited[nx][ny]){
                dfs(nx, ny);
            }
        }
    }
}

int main(){
    
    cin >> m >> n >> k;
    
    for(int i=0; i<k; i++){
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        for(int j=b; j<d; j++){
            for(int k=a; k<c; k++){
                arr[j][k] = 1;
            }
        }
    }
    
    vector<int> v;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(arr[i][j]  == 0 && !visited[i][j]){
                dfs(i, j);
                v.push_back(cnt);
                cnt = 0;
            }
        }
    }
    
    cout << v.size() << "\n";
    sort(v.begin(), v.end());
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    
    return 0;
}