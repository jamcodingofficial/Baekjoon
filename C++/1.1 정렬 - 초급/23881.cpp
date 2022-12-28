/*
 * Author : JC
 * https://www.acmicpc.net/problem/23881
*/

#include <iostream>

using namespace std;

int arr[10000];
int n, k, key, cnt;

int main(){
    
    cin >> n >> k;
    
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    
    for(int i=n-1; i>=0; i--){
        key = i;
        for(int j=i-1; j>=0; j--){
            if(arr[key] < arr[j]){
                key = j;
            }
        }
        if(key != i){
            int tmp = arr[key];
            arr[key] = arr[i];
            arr[i] = tmp;
            cnt++;
            if(cnt == k){
                cout << arr[key] <<  " " << arr[i];
                return 0;
            }
        }
    }
    
    cout << -1;
    
    return 0;
}
