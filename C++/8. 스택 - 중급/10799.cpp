/*
 * Author : JC
 * https://www.acmicpc.net/problem/10799
*/

#include <iostream>
#include <stack>

using namespace std;

string str;
stack<char> s;
int result;

int main(){
    
    cin >> str;
    int len = str.length();
    
    for(int i=0; i<len; i++){
        if(str[i] == '('){
            s.push('(');
        }else{
            s.pop();
            if(str[i-1] == '('){
                result += s.size();
            }else{
                result++;
            }
        }
    }
    
    cout << result;
    
    return 0;
}
