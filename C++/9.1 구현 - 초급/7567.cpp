/*
 * Author : JC
 * https://www.acmicpc.net/problem/7567
*/

#include <iostream>

using namespace std;

string s;

int main() {

    cin >> s;
    int len = s.length();
    int sum = 10;
    for(int i=0; i<len-1; i++){
        if(s[i] == s[i+1]){
            sum+=5;
        }else{
            sum+=10;
        }
    }

    cout << sum;

    return 0;
}