/*
 * Author : JC
 * https://www.acmicpc.net/problem/2675
*/

#include <iostream>
#include <string>

using namespace std;

int t, r;
string s;

int main(){
    
    cin >> t;
    for(int i=0; i<t; i++){
        cin >> r >> s;
        int len = s.length();
        for(int j=0; j<len; j++){
            for(int k=0; k<r; k++){
                cout << s[j];
            }
        }
        cout << "\n";
    }
    
    return 0;
}
