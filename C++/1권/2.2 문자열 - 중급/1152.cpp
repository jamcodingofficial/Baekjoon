/*
 * Author : JC
 * https://www.acmicpc.net/problem/1152
*/

#include <iostream>

using namespace std;

string s;
int cnt;
int main(){

    getline(cin, s);
    int len = s.length();

    for(int i=0; i<len; i++){
        if(s[i] == ' '){
            cnt++;
        }
    }
    
    if(s[0] == ' '){
        cnt--;
    }
    if(s[len-1] == ' '){
        cnt--;
    }
    
    cout << cnt + 1;
    
    return 0;
}