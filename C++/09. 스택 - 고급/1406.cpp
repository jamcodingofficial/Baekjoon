/*
 * Author : JC
 * https://www.acmicpc.net/problem/1406
*/

#include <iostream>
#include <stack>

using namespace std;

string s;
int n;
stack<char> l, r;

int main(){
  
    cin >> s >> n;
    int len = s.length();
    for(int i=0; i<len; i++){
        l.push(s[i]);
    }
    
    for(int i=0; i<n; i++){
        char c;
        cin >> c;
        if(c == 'L'){
            if(!l.empty()){
                r.push(l.top());
                l.pop();
            }
        }else if(c == 'D'){
            if(!r.empty()){
                l.push(r.top());
                r.pop();
            }
        }else if(c == 'B'){
            if(!l.empty()){
                l.pop();
            }
        }else{
            cin >> c;
            l.push(c);
        }
    }
        
    while(!l.empty()){
        r.push(l.top());
        l.pop();
    }
    
    while(!r.empty()){
        cout << r.top();
        r.pop();
    }
}