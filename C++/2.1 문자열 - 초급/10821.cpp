/*
 * Author : JC
 * https://www.acmicpc.net/problem/10821
*/

#include <iostream>
#include <string>

using namespace std;

string s;
int cnt;

int main(){
    
    cin >> s;
    int len = s.length();
    for(int i=0; i<len; i++){
        if(s[i] == ','){
            cnt++;
        }
    }
    cout << cnt + 1;

    return 0;
}