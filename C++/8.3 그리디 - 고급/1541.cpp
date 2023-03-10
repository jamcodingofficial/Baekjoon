/*
 * Author : JC
 * https://www.acmicpc.net/problem/1541
*/

#include <iostream>
#include <string>

using namespace std;

string s;

int main(){
    
    cin >> s;
    int len = s.length();
    bool minus = false;
    string tmp = "";
    int res = 0;
    for(int i=0; i<=len; i++){
        if(s[i] == '-' || s[i] == '+' || s[i] == '\0'){
            if(minus){
                res = res - stoi(tmp);
            }else{
                res = res + stoi(tmp);
            }
            tmp = "";
            if(s[i] == '-'){
                minus = true;
            }
        }else{
            tmp = tmp + s[i];
        }
    }

    cout << res;

    return 0;
}