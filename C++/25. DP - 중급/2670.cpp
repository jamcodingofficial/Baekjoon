/*
 * Author : JC
 * https://www.acmicpc.net/problem/2670
*/

#include <iostream>

using  namespace std;

double arr[100001];
double dp[100001];
int n;

int main(){
    
    cin >> n;
    
    for(int i=1; i<=n; i++){
        cin >> arr[i];
    }
    
    double m = 0;
    for(int i=1; i<=n; i++){
        dp[i] = max(arr[i] * dp[i-1], arr[i]);
        m = max(m, dp[i]);
    }
    
    printf("%.3lf", m);

    return 0;
}