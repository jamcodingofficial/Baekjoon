/*
 * Author : JC
 * https://www.acmicpc.net/problem/2217
*/

#include <iostream>
#include <algorithm>

using namespace std;

int arr[100000];
int n, res, j;

int main() {

    cin >> n;

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    for(int i=1; i<n; i++){ 
        int key = arr[i]; 
        for(j=i-1; j>=0 && arr[j] > key; j--){
            arr[j+1] = arr[j]; 
        } 
        arr[j+1] = key; 
    }

    for(int i=0; i<n; i++){
        if(res < arr[i] * (n-i)){
            res = arr[i] * (n-i);
        }
    }

    cout << res;
    
    return 0;
}