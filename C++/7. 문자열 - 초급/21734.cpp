/*
 * Author : JC
 * https://www.acmicpc.net/problem/21734
*/

#include <iostream>
#include <string>

using namespace std;

string s;

int main(){

    cin >> s; // s : smupc
    int len = s.length();

    for(int i=0; i<len; i++){
        int n = s[i];
        cout << n << endl;
        return 0;
    }    

    return 0;
}