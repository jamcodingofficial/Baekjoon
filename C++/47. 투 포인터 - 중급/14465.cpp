/*
 * Author : JC
 * https://www.acmicpc.net/problem/14465
*/

#include <iostream>
#include <algorithm>

using namespace std;

int arr[100001];

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, k, b;
    cin >> n >> k >> b;
    for(int i=0; i<b; i++){
        int m;
        cin >> m;
        arr[m] = m;
    }
    
    int left = 1;
    int right = k;
    int res = n;
    
    while(right <=n){
        int cnt = 0;
        for(int i=left; i<=right; i++){
            if(arr[i] != 0){
                cnt++;
            }
        }
        if(res > cnt) res = cnt;
        left++;
        right++;
    }
    
    cout << res;

    return 0;
}