/*
 * Author : JC
 * https://www.acmicpc.net/problem/12865
*/

#include <iostream>
#include <algorithm>

using namespace std;

int n,k,w,v;
int dp[100005];

int main(){
    
    cin >> n >> k;
    
    for(int i=0;i<n;i++){
        cin >> w >> v;
        
        for(int j=k;j>=w;j--)
            dp[j] = max(dp[j-w]+v,dp[j]);
    }
    
    cout << dp[k];
    
    return 0;
}