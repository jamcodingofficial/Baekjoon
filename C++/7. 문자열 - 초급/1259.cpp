/*
 * Author : JC
 * https://www.acmicpc.net/problem/1259
*/

#include <iostream>
#include <string>

using namespace std;

string s;

int main(){

    while(1){
        cin >> s;
        if(s == "0"){
            break;
        }
        int len = s.length();
        bool check = true;
        for(int i=0; i<len/2; i++){
            if(s[i] != s[len-i-1]){
                check = false;
                cout << "no\n";
                break;
            }
        }
        if(check == true){
            cout << "yes\n";
        }
    }

    return 0;
}