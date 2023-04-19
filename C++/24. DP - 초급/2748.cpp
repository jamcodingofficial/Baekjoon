/*
 * Author : JC
 * https://www.acmicpc.net/problem/2748
*/

#include <iostream>

using namespace std;

long long arr[45];

long long fibo(long long f){
    if(f==0) return 0;
    if(f==1) return 1;
    if(arr[f] != 0) return arr[f];
    arr[f] = fibo(f-1) + fibo(f-2);
    return arr[f];
}

int main(){

    long long n;
    cin >> n;
    cout << fibo(n);
    
    return 0;   
}