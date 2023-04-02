/*
 * Author : JC
 * https://www.acmicpc.net/problem/11365
*/

#include <iostream>
#include <string>
#include <algorithm> // reverse() 함수 사용할 경우 include

using namespace std;

string s;

int main(){

    while(1){
        getline(cin, s);
        if(s == "END"){
            break;
        }
        int len = s.length();
        for(int i=len-1; i>=0; i--){
            cout << s[i];
        }
        // reverse(s.begin(), s.end()); [Line 16 ~ 18] 코드 대신 사용 가능
        cout << "\n";
    }

    return 0;
}