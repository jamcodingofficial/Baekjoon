/*
 * Author : JC
 * https://www.acmicpc.net/problem/1003
*/

#include <iostream>

using namespace std;

int dp[41] = {0, 1, 1};

int main(){
    
    for(int i=3; i<=40; i++){
        dp[i] = dp[i-2] + dp[i-1];
    }
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int n;
        cin >> n;
        if(n==0){
            cout << 1 << " " << 0 << endl;
        }else if(n==1){
            cout << 0 << " " << 1 << endl;
        }else{
            cout << dp[n-1] << " " << dp[n] << endl;
        }
    }

    return 0;
}