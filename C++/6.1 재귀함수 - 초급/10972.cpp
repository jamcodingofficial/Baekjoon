/*
 * Author : JC
 * https://www.acmicpc.net/problem/10872
*/

#include <iostream>

using namespace std;

int n;

int factorial(int x){
    if(x == 0){
        return 1;
    }
    return x * factorial(x-1);
}
int main(){
    cin >> n;
    cout << factorial(n);
}