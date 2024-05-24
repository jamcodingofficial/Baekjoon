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
    int high = len-1;
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
    while(t--){
        int n, m;
        cin >> n >> m;
        for(int i=0; i<n; i++){
            cin >> A[i];
        }
        for(int i=0; i<m; i++){
            cin >> B[i];
        }
        sort(B, B+m);
        int cnt = 0;
        for(int i=0; i<n; i++){
            cnt += binarySearch(m, A[i]); 
        }

        cout << cnt << "\n";
    }

    return 0;
}