/*
 * Author : JC
 * https://www.acmicpc.net/problem/12605
*/

#include <iostream>
#include <stack>

using namespace std;

int n;
string str;

int main() {
    
    cin >> n;
    cin.ignore();
    
    for(int i=0; i<n; i++){
        getline(cin, str);
        str += " ";
        int len = str.length();
        stack<string> s;
        string tmp;
        cout << "Case #" << i+1 << ": ";
        
        for(int j=0; j<len; j++){
            if(str[j] != ' '){
                tmp += str[j];
            }else{
                s.push(tmp);
                tmp = "";
            }
        }
        
        while(!s.empty()){
            cout << s.top() << " ";
            s.pop();
        }
        cout << "\n";
    }
    
    return 0;
}