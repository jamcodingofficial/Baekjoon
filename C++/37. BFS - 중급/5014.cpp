/*
 * Author : JC
 * https://www.acmicpc.net/problem/5014
*/

#include <iostream>
#include <queue>

using namespace std;

bool visited[1000001];

int main(){
    int f, s, g, u, d;
    cin >> f >> s >> g >> u >> d;
    
    queue<pair<int,int>> qp;
    qp.push({s, 0});
    visited[s] = true;
    while(!qp.empty()){
        int stair = qp.front().first;
        int cnt = qp.front().second;
        if(stair == g){
            cout << cnt;
            return 0;
        }
        qp.pop();
        if(stair+u <= f && !visited[stair+u]){
            qp.push({stair+u, cnt+1});
            visited[stair+u] = true;
        }
        if(stair-d >= 1 && !visited[stair-d]){
            qp.push({stair-d, cnt+1});
            visited[stair-d] = true;
        }
    }
    cout << "use the stairs";
    
    return 0;
}