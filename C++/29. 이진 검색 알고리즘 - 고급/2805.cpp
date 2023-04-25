/*
 * Author : JC
 * https://www.acmicpc.net/problem/2805
*/

#include <iostream>
#include <algorithm>

using namespace std;

int A[1000000];

int main(){
    int n, m;
    cin >> n >> m;
    int max_number = 0;
    for(int i=0; i<n; i++){
        cin >> A[i];
        max_number = max(max_number, A[i]);
    }
    
    int low = 1;
    int high = max_number;
    int mid;
    int res = 0;
    while(low <= high){
        mid = (low + high) / 2;
        long long sum = 0;
        for(int i=0; i<n; i++){
            if(A[i] > mid){
                sum += A[i]-mid;
            }
        }
        if(m <= sum){
            res = max(res, mid);
            low = mid+1;
        }else{
            high = mid-1;
        }
    }
    
    cout << res;
    
    return 0;
}