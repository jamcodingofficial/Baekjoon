/*
 * Author : JC
 * https://www.acmicpc.net/problem/3986
*/

#include <iostream>
#include <stack>

using namespace std;
 
int n, cnt;
string str;

int main() {

    cin >> n;
    
    for(int i=0; i<n; i++){
        stack<char> s;
        cin >> str;
        int len = str.length();
        s.push(str[0]);
        for(int j=1; j<len; j++){
            if(s.empty()){
                s.push(str[j]);
            }else{
                if(s.top() == str[j]){
                    s.pop();
                }else{
                    s.push(str[j]);
                }
            }
        }
        
        if(s.empty()){
            cnt++;
        }
    }
    
    cout << cnt;
    
    return 0;
}