/*
 * Author : JC
 * https://www.acmicpc.net/problem/2747
*/

#include <iostream>

using namespace std;

int arr[45];

int fibo(int x){ 
    if(x==1 || x== 2){
        return 1;
    }
    if(arr[x] != 0){
        return arr[x];
    }
    arr[x] = fibo(x-1)  + fibo(x-2);
    return arr[x];
}

int main(){
    int n;
    cin >> n;
    cout << fibo(n);

    return 0;
}