/*
 * Author : JC
 * https://www.acmicpc.net/problem/2161
*/

#include <iostream>
#include <queue>

using namespace std;

int n;
queue<int> q;

int main(){
    
    cin >> n;
    for(int i=1; i<=n; i++){
        q.push(i);
    }

    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
        q.push(q.front());
        q.pop();
    }
    
    return 0;
}