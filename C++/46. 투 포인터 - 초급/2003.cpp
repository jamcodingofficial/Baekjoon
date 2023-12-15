/*
 * Author : JC
 * https://www.acmicpc.net/problem/2003
*/

#include <iostream>

using namespace std;

int n, m;
int arr[10000];
int l, r;
int sum, cnt;

int main(){

    cin >> n >> m;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    
    while(r <= n){
        if(sum < m){
            sum = sum + arr[r];
            r++;
        }else if(sum >= m){
            if(sum == m){
                cnt++;
            }
            sum = sum - arr[l];
            l++;
        }
    }
    
    cout << cnt;

    return 0;   
}