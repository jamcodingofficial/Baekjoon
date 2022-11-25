/*
 * Author : JC
 * https://www.acmicpc.net/problem/24510
*/

#include <iostream>
#include <string>

using namespace std;

int c, len, cnt, res;
string s;

int main(){

    cin >> c;
    
    for(int i=0; i<c; i++){
        cin >> s;
        len = s.length();
        cnt = 0;
        
        for(int j=0; j<len-2; j++){
            if(s[j] == 'f' && s[j+1] == 'o' && s[j+2] == 'r'){
                cnt++;
            }
        }
        for(int j=0; j<len-4; j++){
            if(s[j] == 'w' && s[j+1] == 'h' && s[j+2] == 'i' && s[j+3] == 'l' && s[j+4] == 'e'){
                cnt++;
            }
        }
        if(res < cnt){
            res = cnt;
        }
    }
    
    cout << res;
    
    return 0;
}