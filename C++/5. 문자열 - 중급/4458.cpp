/*
 * Author : JC
 * https://www.acmicpc.net/problem/4458
*/

#include <iostream>
#include <string>

using namespace std;

int n;
string s;

int main(){

    cin >> n;
    cin.ignore();
    
    for(int i=0; i<n; i++){
        getline(cin, s);
        if(s[0] >= 'a' && s[0] <= 'z'){
            s[0] = char(s[0] - 32);
        }
        cout << s << "\n";
    }

    return 0;
}
