/*
 * Author : JC
 * https://www.acmicpc.net/problem/21734
*/

#include <iostream>
#include <string>

using namespace std;

string s;

int main(){

    cin >> s;

    int len = s.length();
    for(int i=0; i<len; i++){
        int n = s[i];
        int sum = 0;
        while(n > 0){
            sum += n % 10;
            n /= 10;
        }
        for(int j=0; j<sum; j++){
            cout << s[i];
        }
        cout << "\n";
    }

    return 0;
}
