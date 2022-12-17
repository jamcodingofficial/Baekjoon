/*
 * Author : JC
 * https://www.acmicpc.net/problem/4949
*/

#include <iostream>
#include <stack>

using namespace std;

string str;

int main() {
    
    while(1){
        getline(cin, str);
        int len = str.length();
        if(str == "."){
            break;
        }
        stack<char> s;
        bool check = true;
        for(int i=0; i<len; i++){
            if(str[i] == '(' || str[i] == '['){
                s.push(str[i]);
            }else if(str[i] == ')'){
                if(s.empty()){
                    cout << "no\n";
                    check = false;
                    break;
                }else{
                    if(s.top() == '('){
                        s.pop();
                    }else{
                        s.push(')');
                    }
                }
            }else if(str[i] == ']'){
                if(s.empty()){
                    cout << "no\n";
                    check = false;
                    break;
                }else{
                    if(s.top() == '['){
                        s.pop();
                    }else{
                        s.push(']');
                    }
                }
            }
        }
        
        if(check == false){
            continue;
        }
        
        if(s.empty()){
            cout << "yes\n";
        }else{
            cout << "no\n";
        }
    }
    
    return 0;
}