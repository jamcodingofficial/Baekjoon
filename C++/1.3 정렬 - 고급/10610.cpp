/*
 * Author : JC
 * https://www.acmicpc.net/problem/10610
*/

#include <iostream>
#include <algorithm>

using namespace std;

string s;
int sum;

int main(){

    cin >> s;
    int len = s.length();
    for(int i=0; i<len; i++){
        sum += s[i]-'0';
    }
    
    sort(s.rbegin(), s.rend());
    
    if(sum % 3 != 0 || s[len-1] != '0'){
        cout << -1;
    }else{
        cout << s;
    }

    return 0;
}