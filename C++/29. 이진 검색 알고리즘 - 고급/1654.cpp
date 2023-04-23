/*
 * Author : JC
 * https://www.acmicpc.net/problem/1654
*/

#include <iostream>
#include <cmath>

using namespace std;
typedef long long ll;

int k, n;
int A[10000];

int main(){
    cin >> k >> n;
    int max_number = 0;
    for(int i=0; i<k; i++){
        cin >> A[i];
        max_number = max(max_number, A[i]);
    }

    ll low = 1;
    ll high = max_number;
    ll mid;
    ll res = 0;
    while(low <= high){
        mid = (low + high) / 2;
        ll ans = 0;
        for(int i=0; i<k; i++){
            ans += A[i]/mid;
        }
        if(n > ans){
            high = mid-1;
        }else{
            res = max(res, mid);
            low = mid+1;
        }
    }
    cout << res;
    
    return 0;
}