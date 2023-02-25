/*
 * Author : JC
 * https://www.acmicpc.net/problem/1439
*/

#include <iostream>

using namespace std;

string s;
int zero, one;

int main(){

    cin >> s;
    
    if(s[0] == '0'){
        zero++;
    }else{
        one++;
    }
    
    int len = s.length();
    for(int i=0; i<len-1; i++){
        if(s[i] != s[i+1]){
            if(s[i+1] == '0'){
                zero++;
            }else{
                one++;
            }
        }
    }
    
    cout << min(zero, one);
    
    return 0;
}