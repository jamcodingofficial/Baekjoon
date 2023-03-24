/*
 * Author : JC
 * https://www.acmicpc.net/problem/1110
*/

#include <iostream>

using namespace std;

int n, cnt, tmp;

int main(){
    
    cin >> n;
    tmp = n;
    while(1){
        int a = tmp / 10;
        int b = tmp % 10;
        int c = (a + b) % 10;
        tmp = b * 10 + c;
        cnt++;
        if(n == tmp){
            cout << cnt;
            break;
        }
    }
    
    return 0;
}