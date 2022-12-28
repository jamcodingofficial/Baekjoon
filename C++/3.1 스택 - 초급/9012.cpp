/*
 * Author : JC
 * https://www.acmicpc.net/problem/9012
*/

#include <iostream>
#include <stack>

using namespace std;

int n;
string str;

int main(){

    cin >> n;
    
    for(int i=0; i<n; i++){
        stack<string> s;
        cin >> str;
        int len = str.length();
        bool check = true;
        for(int j=0; j<len; j++){
            if(str[j] == '('){
                s.push("1");
            }else{
                if(s.empty()){
                    cout << "NO\n";
                    check = false;
                    break;
                }
                s.pop();
            }
        }
        if(check == false){
            continue;
        }
        if(s.empty()){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
    
    return 0;
}
