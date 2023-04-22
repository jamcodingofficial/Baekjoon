/*
 * Author : JC
 * https://www.acmicpc.net/problem/10815
*/

#include <iostream>
#include <algorithm>

int arr[500000];
int brr[500000];

using namespace std;

int binarySearch(int len, int target){
    int low = 0;
    int high = len - 1;
    int mid;
    while(low <= high){
        mid = (low + high) / 2;
        if(arr[mid] == target){
            return 1;
        }else if(arr[mid] < target){
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }
    return 0;
}

int main(){
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    sort(arr, arr+n);
    int m;
    cin >> m;
    for(int i=0; i<m; i++){
        cin >> brr[i];
    }
    for(int i=0; i<m; i++){
        int result = binarySearch(n, brr[i]);
        if(result == 1){
            cout << 1 <<  " ";
        }else{
            cout << 0 << " ";
        }
    }
    return 0;
}
