/*
 * Author : JC
 * https://www.acmicpc.net/problem/1032
*/

#include <iostream>
#include <string>

using namespace std;

string s1, s2;
long long res;

int main(){
    
    cin >> s1 >> s2;
    int len1 = s1.length();
    int len2 = s2.length();
    
    for(int i=0; i<len1; i++){
        for(int j=0; j<len2; j++){
            res = res + (s1[i]-'0') * (s2[j]-'0');
        }
    }
    
    cout << res;
    
    return 0;
}