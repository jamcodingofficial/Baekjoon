/*
 * Author : JC
 * https://www.acmicpc.net/problem/1543
*/

#include <iostream>
#include <string>

using namespace std;

string s1, s2;
int cnt;

int main(){

    getline(cin, s1);
    getline(cin, s2);
    
    int len = s1.length();
    
    while(s1.find(s2) != string::npos){
        cnt++;
        s1 = s1.substr(s1.find(s2)+s2.length());
    }
    
    cout << cnt;
    
    return 0;
}
