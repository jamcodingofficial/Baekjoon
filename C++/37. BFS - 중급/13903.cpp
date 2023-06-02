/*
 * Author : JC
 * https://www.acmicpc.net/problem/13903
*/

#include <iostream>
#include <queue>
#include <string.h>

using namespace std;

int r, c, n;
int arr[1000][1000];
bool visited[1000][1000];
int dx[10], dy[10];
queue<pair<int, pair<int, int>>> qp;

int bfs(){
    while(!qp.empty()){
        pair<int, pair<int,int>> p;
        p = qp.front();
        qp.pop();
        for(int i=0; i<n; i++){
            int nx = p.first + dx[i];
            int ny = p.second.first + dy[i];
            int nz = p.second.second;
            if(0 <= nx && nx < r && 0 <= ny && ny < c){
                if(arr[nx][ny] == 1 && !visited[nx][ny]){
                    qp.push({nx, {ny, nz+1}});
                    visited[nx][ny] = true;
                    if(nx == r-1){
                        return nz+1;
                    }
                }
            }
        }
    }
    return -1;
}

int main(){
    
    cin >> r >> c;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin >> arr[i][j];
        }
    }

    cin >> n;
    for(int i=0; i<n; i++){
        cin >> dx[i] >> dy[i];
    }
    
    for(int i=0; i<c; i++){
        if(arr[0][i] == 1){
            qp.push({0, {i, 0}});
            visited[0][i] = true;
        }
    }
    
    cout << bfs();

    return 0;   
}