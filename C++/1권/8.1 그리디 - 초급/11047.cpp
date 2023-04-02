/*
 * Author : JC
 * https://www.acmicpc.net/problem/11047
*/

#include <iostream>

using namespace std;

int n, k, res;
int coin[10];

int main(){
    
    cin >> n >> k;
    
    for(int i=n-1; i>=0; i--){
        cin >> coin[i];
    }
    
    for(int i=0; i<n; i++){
        res += k / coin[i];
        k %= coin[i];
    }
    
    cout << res;
    
    return 0;
}