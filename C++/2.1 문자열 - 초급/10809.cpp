/*
 * Author : JC
 * https://www.acmicpc.net/problem/10809
*/

#include <iostream>
#include <string>

using namespace std;

string s;
int alpha[26];

int main(){
    
    cin >> s;
    int len = s.length();
    fill(alpha, alpha+26, -1);
    
    for(int i=0; i<len; i++){
        if(alpha[s[i]-97] == -1){
            alpha[s[i]-97] = i;
        }
    }
    
    for(int i=0; i<26; i++){
        cout << alpha[i] << " ";
    }

    return 0;
}