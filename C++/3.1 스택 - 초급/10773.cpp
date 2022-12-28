/*
 * Author : JC
 * https://www.acmicpc.net/problem/10773
*/

#include <iostream>
#include <stack>

using namespace std;

int n, t, sum;
stack<int> s;

int main(){

    cin >> n;
    
    for(int i=0; i<n; i++){
        cin >> t;
        if(t == 0){
            s.pop();
        }else{
            s.push(t);
        }
    }
    
    while(!s.empty()){
        sum += s.top();
        s.pop();
    }
    
    cout << sum;
    
    return 0;
}