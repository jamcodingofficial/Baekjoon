/*
 * Author : JC
 * https://www.acmicpc.net/problem/1157
*/

#include <iostream>
#include <string>

using namespace std;

int alpha[27];
int cnt;
char res;
string s;

int main(){
    
    cin >> s;
    int len = s.length();
    
    for(int i=0; i<len; i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            alpha[s[i]-'A'+1]++;
        }else{
            alpha[s[i]-'a'+1]++;
        }
    }
    
    for(int i=1; i<=26; i++){
        if(cnt < alpha[i]){
            cnt = alpha[i];
            res = i + 'A' - 1;
        }else if(cnt == alpha[i]){
            res = '?';
        }
    }

    cout << res;
    
    return 0;
}