/*
 * Author : JC
 * https://www.acmicpc.net/problem/10870
*/

#include <iostream>

using namespace std;

int n;

int fibonacci(int x){
    if(x == 0){
        return 0;
    }
    if(x == 1){
        return 1;
    }
    return fibonacci(x-1) + fibonacci(x-2);
}
int main(){
    cin >> n;
    cout << fibonacci(n);
}