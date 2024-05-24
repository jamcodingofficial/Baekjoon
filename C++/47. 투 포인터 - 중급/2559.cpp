/*
 * Author : JC
 * https://www.acmicpc.net/problem/2559
*/

#include <iostream>

using namespace std;

int arr[100000];

int main(){
    int n, k;
    cin >> n >> k;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    
    int sum = 0;
    for(int i=0; i<k; i++){
        sum += arr[i];
    }
    int ans = sum;
    int low = 0;
    int high = k;
    for(int i=0; i<n-k; i++){ 
        sum = sum - arr[low++] + arr[high++]; 
        ans = max(ans, sum); 
    }

    cout << ans;
    
    return 0;
}