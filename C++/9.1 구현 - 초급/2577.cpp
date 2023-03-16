/*
 * Author : JC
 * https://www.acmicpc.net/problem/2577
*/

#include <iostream>

using namespace std;

int num[10];
int a, b, c;

int main(){
    
    cin >> a >> b >> c;
    string str = to_string(a * b * c);
    int len = str.length();

    for(int i=0; i<len; i++){
        num[str[i]-'0']++;
    }
    for(int i=0; i<10; i++){
        cout << num[i] << endl;
    }

    return 0;
}