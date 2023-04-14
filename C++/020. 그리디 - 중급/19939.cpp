/*
 * Author : JC
 * https://www.acmicpc.net/problem/19939
*/

#include <iostream>

using namespace std;

int n, k;
int sum;

int main(){
    
    cin >> n >> k;
    for(int i=1; i<=k; i++){
        sum += i;
    }
    n -= sum;
    if(n < 0){
        cout << -1;
    }else{
        if(n % k == 0){
            cout << k-1;
        }else{
            cout << k;
        }
    }
    
    return 0;
}