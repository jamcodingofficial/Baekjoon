/*
 * Author : JC
 * https://www.acmicpc.net/problem/2908
*/

#include <iostream>

using namespace std;

int check(int x){
    int rev = 0;
    while(x){
        rev = rev * 10 + x % 10;
        x /= 10;
    }
    return rev;
}

int main(){

    int a, b;
    cin >> a >> b;
    
    cout << max(check(a), check(b));
    
    return 0;
}