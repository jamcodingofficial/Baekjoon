/*
 * Author : JC
 * https://www.acmicpc.net/problem/2744
*/

#include <iostream>
#include <string>

using namespace std;

string s;

int main(){
    
    cin >> s;
    int len = s.length();
    for(int i=0; i<len; i++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            cout << (char)(s[i] - 32);
        }else{
            cout << (char)(s[i] + 32);
        }
    }

    return 0;
}