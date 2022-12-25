/*
 * Author : JC
 * https://www.acmicpc.net/problem/5397
*/

#include <iostream>
#include <stack>

using namespace std;

int n;
string str;

int main() {

    cin >> n;
    
    for(int i=0; i<n; i++){
        cin >> str;
        int len = str.length();
        stack<char> l, r;
        for(int j=0; j<len; j++){
            if(str[j] == '<'){
                if(!l.empty()){
                    r.push(l.top());
                    l.pop();
                }
            }else if(str[j] == '>'){
                if(!r.empty()){
                    l.push(r.top());
                    r.pop();
                }
            }else if(str[j] == '-'){
                if(!l.empty()){
                    l.pop();
                }
            }else{
                l.push(str[j]);
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
        cout << "\n";
    }
    return 0;
}