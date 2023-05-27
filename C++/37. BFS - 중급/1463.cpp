/*
 * Author : JC
 * https://www.acmicpc.net/problem/1463
*/

#include <iostream>
#include <queue>

using namespace std;

bool visited[1000001];

int main(){
    int n;
    cin >> n;
    queue<pair<int,int>> qp;
    qp.push({n, 0});
    visited[n] = true;
    while(!qp.empty()){
        int num = qp.front().first;
        int cnt = qp.front().second;
        if(num == 1){
            cout << cnt;
            break;
        }
        qp.pop();
        if(num%3==0 && !visited[num/3]){
            qp.push({num/3, cnt+1});
            visited[num/3] = true;
        }
        if(num%2==0 && !visited[num/2]){
            qp.push({num/2, cnt+1});
            visited[num/2] = true;
        }
        if(num-1 >= 1 && !visited[num-1]){
            qp.push({num-1, cnt+1});
            visited[num-1] = true;
        }
    }
    
    return 0;
}