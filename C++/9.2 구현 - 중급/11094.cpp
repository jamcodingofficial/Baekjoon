/*
 * Author : JC
 * https://www.acmicpc.net/problem/11094
*/

#include <iostream>

using namespace std;
 
int n;

int main(){
    
    cin >> n;
    cin.ignore();
    for(int i=0; i<n; i++){
        string str;
        getline(cin, str);
        if(str.substr(0, 10) == "Simon says"){
            for(int j=10; j<str.length(); j++){
                cout << str[j];
            }
            cout << "\n";
        }
    }

    return 0;
}