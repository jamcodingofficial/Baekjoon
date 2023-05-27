/*
 * Author : JC
 * https://www.acmicpc.net/problem/16953
*/

#include <iostream>
#include <queue>

using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    queue<pair<int,int>> qp;
    qp.push({a, 0});
    while(!qp.empty()){
        long long num = qp.front().first;
        int cnt = qp.front().second;
        if(num ==  b){
            cout << cnt+1;
            return 0;
        }
        qp.pop();
        if(num*2 <= b){
            qp.push({num*2, cnt+1});
        }
        if(num*10+1 <= b){
            qp.push({num*10+1, cnt+1});
        }
    }
    cout << -1;
    
    return 0;
}