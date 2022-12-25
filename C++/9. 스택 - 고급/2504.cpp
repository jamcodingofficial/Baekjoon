/*
 * Author : JC
 * https://www.acmicpc.net/problem/2504
*/

#include <iostream>
#include <string>
#include <stack>

using namespace std;

string str;
stack<char> s;
int tmp = 1, cnt;

int main() {
  
    cin >> str;
    int len = str.size();

    for(int i=0;i<len;i++){
        if(str[i] == '('){
            tmp *= 2;
            s.push(str[i]);
        }else if(str[i] == '['){
            tmp *= 3;
            s.push(str[i]);
        }else if(str[i] == ')'){
            if(s.empty() || s.top() != '('){
                cout << "0";
                return 0;
            }
            if(str[i-1] == '('){
                s.pop();
                cnt += tmp;
                tmp /= 2;
            }else{
                s.pop();
                tmp /= 2;
            }
        }else if(str[i] == ']'){
            if(s.empty() || s.top() != '['){
                cout << "0";
                return 0;
            }
            if(str[i-1] == '['){
                s.pop();
                cnt += tmp;
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
        cout << cnt;
    }
    
    return 0;
}