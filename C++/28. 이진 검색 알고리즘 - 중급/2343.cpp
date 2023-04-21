/*
 * Author : JC
 * https://www.acmicpc.net/problem/2343
*/

#include <iostream>

using namespace std;

int n, m;
int arr[100001];
int low, high;

int main() {
    
    cin >> n >> m;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        low = max(low, arr[i]);
        high += arr[i];
    }
    
    int res = high;
    while(low <= high){
        int mid = (low + high) / 2;
        int sum = 0;
        int cnt = 1;
        for(int i=0; i<n; i++){
            if(sum + arr[i] > mid){
                cnt++;
                sum = 0;
            }
            sum += arr[i];
        }
        if(cnt > m){
            low = mid + 1;
        }else{
            high = mid - 1;
            if(res > mid){
                res = mid;
            }
        }
    }
    cout << low;
    
    return 0;
}