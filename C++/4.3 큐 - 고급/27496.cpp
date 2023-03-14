/*
 * Author : JC
 * https://www.acmicpc.net/problem/27496
*/

#include <iostream>
#include <queue>

using namespace std;

int n, l;
int sum, cnt;
queue<int> q;

int main() {
    
    cin >> n >> l;
    for(int i=0; i<n; i++){
        int t;
        cin >> t;
        q.push(t);
        sum += t; 
        if(q.size() > l){
            sum -= q.front();
            q.pop();
        }
        if(129 <= sum && sum <= 138){
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}