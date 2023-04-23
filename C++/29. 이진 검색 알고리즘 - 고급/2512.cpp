/*
 * Author : JC
 * https://www.acmicpc.net/problem/2512
*/

#include <iostream>

using namespace std;

int n, m;
int max_number, min_number;
int A[10000];

int main(){
    
    cin >> n;
    
    int sum = 0;
    for(int i=0; i<n; i++){
        cin >> A[i];
        min_number = min(min_number, A[i]);
        max_number = max(max_number, A[i]);
    }
    cin >> m;
    
    int low = min_number;
    int high = max_number;
    int mid;
    int res = 0;

    while(low <= high){
        mid = (low + high) / 2;
        int sum = 0;
        for(int i=0; i<n; i++){
            if(A[i] > mid){
                sum += mid;
            }else{
                sum += A[i];
            }
        }
        if(m >= sum){
            if(res < mid){
                res = mid;
            }
            low = mid+1;
        }else{
            high = mid-1;
        }
    }

    cout << res;
    return 0;
}

