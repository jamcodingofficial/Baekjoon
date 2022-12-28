/*
 * Author : JC
 * https://www.acmicpc.net/problem/2504
*/

#include <iostream>
#include <string>
#include <stack>

using namespace std;

string str;
int tmp = 1, res;
stack<char> s;

int main() {

    cin >> str;
    int len = str.length();
    
    for(int i=0; i<len; i++){
        if(str[i] == '('){
            tmp *= 2;
            s.push('(');
        }else if(str[i] == ')'){
            if(s.empty() || s.top() == '['){
                cout << 0;
                return 0;
            }else{
                if(str[i-1] == '('){
                    s.pop();
                    res += tmp;
                    tmp /= 2;
                }else{
                    s.pop();
                    tmp /= 2;
                }
            }
        }
        if(str[i] == '['){
            tmp *= 3;
            s.push('[');
        }else if(str[i] == ']'){
            if(s.empty() || s.top() == '('){
                cout << 0;
                return 0;
            }else if(str[i-1] == '['){
                s.pop();
                res += tmp;
                tmp /= 3;
            }else{
                s.pop();
                tmp /= 3;
            }
        }
    }
    
    if(!s.empty()){
        cout << 0;
    }else{
        cout << res;
    }
    
    return 0;
}