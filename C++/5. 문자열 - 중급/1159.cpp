/*
 * Author : JC
 * https://www.acmicpc.net/problem/1159
*/

#include <iostream>

using namespace std;

int n;
string s;
int alpha[27];
bool check;

int main(){
    
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> s;
        alpha[s[0] - 'a' + 1]++;
    }
    
    for(int i=1; i<=26; i++){
        if(alpha[i] >= 5){
            cout << (char)(i + 'a' - 1);
            check = true;
        }
    }

    if(check == false){
        cout << "PREDAJA";
    }
    
    return 0;
}