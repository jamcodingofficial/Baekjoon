/*
 * Author : JC
 * https://www.acmicpc.net/problem/2548
*/

#include <iostream>
#include <algorithm>

using namespace std;

int A[20000];
int n;

int main(){
    
    cin >> n;
    int sum = 0;
    int max_number = 0;
    for(int i=0; i<n; i++){
        cin >> A[i];
        sum += A[i];
    }
    sort(A, A+n);
    
    int avg = sum / n;
    int ans = 0;
    for(int i=0; i<n; i++){
        ans += abs(avg - A[i]);
    }
    
    int low = 0;
    int high = n-1;
    int mid;
    int idx = n-1;
    while(low <= high){
        mid = (low + high) / 2;
        int sum = 0;
        for(int i=0; i<n; i++){
            sum += abs(A[mid] - A[i]);
        }
        if(ans >= sum){
            low = mid+1;
            ans = sum;
            idx = min(idx,mid);
        }else{
            high = mid-1;
        }
    }
    
    cout << A[idx];
    
    return 0;
}