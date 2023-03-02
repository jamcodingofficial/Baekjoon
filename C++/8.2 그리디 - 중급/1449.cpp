/*
 * Author : JC
 * https://www.acmicpc.net/problem/1449
*/

#include <iostream>
#include <algorithm>

using namespace std;

int arr[1000];

int main(){
    int n, l;
    cin >> n >> l;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    sort(arr, arr+n);
    
    double start = arr[0] - 0.5;
    double end = start + l;

    int cnt = 0;
    for(int i=0; i<n; i++){
        if(start <= arr[i] && arr[i] <= end){
            continue;
        }
        start = arr[i] - 0.5;
        end = start + l;
        cnt++;
    }
    
    cout << cnt + 1;

    return 0;       
}