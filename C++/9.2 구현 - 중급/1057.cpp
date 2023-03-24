/*
 * Author : JC
 * https://www.acmicpc.net/problem/1057
*/

#include <iostream>

using namespace std;

int a, b, c;
int cnt;

int main(){
    
    cin >> a >> b >> c;
    
    while(b != c){
        b = b - b / 2;
        c = c - c / 2;
        cnt++;
    }

    cout << cnt;

    return 0;
}