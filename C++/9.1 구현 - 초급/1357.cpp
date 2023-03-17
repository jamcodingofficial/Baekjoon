/*
 * Author : JC
 * https://www.acmicpc.net/problem/1357
*/

#include <iostream>

using namespace std;

int rev(int r){
    int reverse = 0;
    while(r){
        reverse = reverse * 10 + r % 10;
        r /= 10;
    }
    return reverse;
}

int main(){
    int x, y;
    cin >> x >> y;
    cout << rev(rev(x)+rev(y));
    
    return 0;
}