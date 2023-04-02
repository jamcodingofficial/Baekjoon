/*
 * Author : JC
 * https://www.acmicpc.net/problem/10828
*/

#include <iostream>
#include <stack>

using namespace std;

int n, t;
stack<int> s;

int main(){

    cin >> n;
    
    for(int i=0; i<n; i++){
        string str;
        cin >> str;
        if(str == "push"){
            cin >> t;
            s.push(t);
        }else if(str == "pop"){
            if(!s.empty()){
                cout << s.top() << "\n";
                s.pop();
            }else{
                cout << "-1\n";
            }
        }else if(str == "size"){
            cout << s.size() << "\n";
        }else if(str == "empty"){
            cout << s.empty() << "\n";
        }else{
            if(!s.empty()){
                cout << s.top() << "\n";
            }else{
                cout << "-1\n";
            }
        }
    }
    return 0;
}