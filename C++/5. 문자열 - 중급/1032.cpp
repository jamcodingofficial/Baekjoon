/*
 * Author : JC
 * https://www.acmicpc.net/problem/1032
*/

#include <iostream>

using namespace std;

int n;
string s1, s2;

int main(){
    
    cin >> n;

    cin >> s1;
    int len = s1.length();
    for(int i=0; i<n-1; i++){
        cin >> s2;
        for(int j=0; j<len; j++){
            if(s1[j] != s2[j]){
                s1[j] = '?';
            }
        }
    }

    cout << s1;
    
    return 0;
}