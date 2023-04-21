/*
 * Author : JC
 * https://www.acmicpc.net/problem/2747
*/

#include <iostream>

using namespace std;

int map[46];

int fibonacci(int x){ 
    if(x == 1 || x == 2) return 1;
    if(map[x] != 0){
        return map[x];
    }
    map[x] = fibonacci(x-2) + fibonacci(x-1);
    return map[x];
}

int main(){
    int n;
    cin >> n;
    cout << fibonacci(n);
    
    return 0;
}