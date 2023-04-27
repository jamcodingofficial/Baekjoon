/*
 * Author : JC
 * https://www.acmicpc.net/problem/2231
*/

#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i=1; i<=n; i++){
        int tmp = i;
        int sum = 0;
        while(tmp){
            sum += tmp%10;
            tmp /= 10;
        }
        if(i + sum == n){
            cout << i;
            return 0;
        }
    }
    cout << 0;
    
    return 0;
}