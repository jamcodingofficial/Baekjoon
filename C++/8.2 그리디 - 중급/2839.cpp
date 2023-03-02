/*
 * Author : JC
 * https://www.acmicpc.net/problem/2839
*/

#include <iostream>

using namespace std;

int n, cnt;

int main(){
    
    cin >> n;
    while(n % 5 != 0){
        cnt++;
        n -= 3;
        if(n < 0){
            cout << -1;
            return 0;
        }
    }
    
    cout << n / 5 + cnt;
 
    return 0;
}