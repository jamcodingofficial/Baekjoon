/*
 * Author : JC
 * https://www.acmicpc.net/problem/1940
*/

#include <iostream>
#include <algorithm>

using namespace std;

int arr[15000];

int main(){
    int n, m;
    cin >> n >> m;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    sort(arr, arr+n);
    int left = 0, right = n-1;
    int cnt = 0;
    while(left != right){
        int sum = arr[left] + arr[right];
        if(sum >= m){
            if(sum == m){
                cnt++;
            }
            right--;
        }else if(sum < m){
            left++;
        }
    }
    
    cout << cnt;

    return 0;
}