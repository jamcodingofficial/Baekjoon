/*
 * Author : JC
 * https://www.acmicpc.net/problem/11720
*/

#include <iostream>
#include <string>

using namespace std;

int n;
string s;
int sum;

int main(){
    
    cin >> n >> s;
    
    for(int i=0; i<n; i++){
        sum += s[i] - '0';
    }
    
    cout << sum;

    return 0;
}