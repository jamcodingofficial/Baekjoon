/*
 * Author : JC
 * https://www.acmicpc.net/problem/1697
*/

#include <iostream>
#include <queue>

using namespace std;

bool visited[100001];

int main(){
    int n, k;
    cin >> n >> k;
    queue<pair<int,int>> qp;
    qp.push({n, 0});
    visited[n] = true;
    while(!qp.empty()){
        int loc = qp.front().first;
        int cnt = qp.front().second;
        if(loc == k){
            cout << cnt;
            break;
        }
        qp.pop();
        if(loc+1 <= 100000 && !visited[loc+1]){
            qp.push({loc+1, cnt+1});
            visited[loc+1] = true;
        }
        if(loc-1 >= 0 && !visited[loc-1]){
            qp.push({loc-1, cnt+1});
            visited[loc-1] = true;
        }
        if(loc*2 <= 100000 && !visited[loc*2]){
            qp.push({loc*2, cnt+1});
            visited[loc*2] = true;
        }
    }

    return 0;   
}