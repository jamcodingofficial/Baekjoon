/*
 * Author : JC
 * https://www.acmicpc.net/problem/1806
*/

#include <iostream>

using namespace std;

int arr[100000];

int main(){
    int n, s;
    cin >> n >> s;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    long long sum = 0, ans = 100000001;
    int l = 0, r = 0;
    
    while(r <= n){
        if(sum < s){
            sum += arr[r++];
        }else{
            int k = r - l;
            if(k < ans){
                ans = k;
            }
            sum -= arr[l++];
        }
    }
    
    if(ans == 100000001){
        ans = 0;
    }
    
    cout << ans;
    
    return 0;
}