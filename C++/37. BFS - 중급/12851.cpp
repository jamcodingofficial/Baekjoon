/*
 * Author : JC
 * https://www.acmicpc.net/problem/12851
*/

#include <iostream>
#include <queue>

using namespace std;

bool visited[100001];
int ans, check;

int main(){
    int n, k;
    cin >> n >> k;
    queue<pair<int,int>> qp;
    qp.push({n, 0});
    
    while(!qp.empty()){
        int loc = qp.front().first;
        int cnt = qp.front().second;
        qp.pop();
        if(loc == k && ans == 0){
            cout << cnt << "\n";
            ans = cnt;
            check++;
            continue;
        }
        if(ans == cnt && loc == k){
            check++;
        }
        visited[loc] = true;
        if(loc+1 <= 100000 && !visited[loc+1]){
            qp.push({loc+1, cnt+1});
        }
        if(loc-1 >=0 && !visited[loc-1]){
            qp.push({loc-1, cnt+1});
        }
        if(loc*2 <= 100000 && !visited[loc*2]){
            qp.push({loc*2, cnt+1});
        }
    }
    cout << check;

    return 0;
}