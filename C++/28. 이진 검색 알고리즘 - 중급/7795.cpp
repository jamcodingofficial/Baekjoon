/*
 * Author : JC
 * https://www.acmicpc.net/problem/7795
*/

#include <iostream>
#include <algorithm>

using namespace std;

int A[20000];
int B[20000];

int binarySearch(int len, int target){
    int low = 0;
    int high = len - 1;
    int mid;
    while(low <= high){
        mid = (low + high) / 2;
        if(B[mid] == target){
            high = mid - 1;
        }else if(B[mid] < target){
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }
    return low;
}

int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int n, m;
        cin >> n >> m;
        for(int j=0; j<n; j++){
            cin >> A[j];
        }
        for(int j=0; j<m; j++){
            cin >> B[j];
        }
        sort(B, B+m);
        int sum = 0;
        for(int j=0; j<n; j++){
            sum += binarySearch(m, A[j]);
        }
        cout << sum << "\n";
    }
    
    return 0;
}