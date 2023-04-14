/*
 * Author : JC
 * https://www.acmicpc.net/problem/17608
*/

#include <iostream>
#include <stack>

using namespace std;
 
int n, t;
stack<int> s;

int main() {

    cin >> n;
    
    for(int i=0; i<n; i++){
        cin >> t;
        s.push(t);
    }
    
    int cnt = 1;
    int top = s.top();
    s.pop();
    
    while(!s.empty()){
        if(top < s.top()){
            top = s.top();
            cnt++;
        }
        s.pop();
    }
    
    cout << cnt;
    
    return 0;
}