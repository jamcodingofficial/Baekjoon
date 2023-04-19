/*
 * Author : JC
 * https://www.acmicpc.net/problem/1912
*/

#include <iostream>

using namespace std;

int arr[100001];
int dp[100001];
int n;

int main(){

    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> arr[i];
    }
    int res = arr[1];
    for(int i=1; i<=n; i++){
        dp[i] = max(arr[i] + dp[i-1], arr[i]);
        res = max(res, dp[i]);
    }
    cout << res;

    return 0;
}