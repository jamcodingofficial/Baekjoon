/*
 * Author : JC
 * https://www.acmicpc.net/problem/23968
*/

#include <iostream>

using namespace std;

int arr[10000];
int n, k, cnt;

int main(){
    
    cin >> n >> k;
    
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }   
    for(int i=n-1; i>=0; i--){
        for(int j=0; j<i; j++){
            if(arr[j] > arr[j+1]){
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
                cnt++;
                if(cnt==k){
                    cout << arr[j] << " " << arr[j+1];
                    return 0;
                }
            }
        }
    }
    
    cout << -1;
    
    return 0;
}
