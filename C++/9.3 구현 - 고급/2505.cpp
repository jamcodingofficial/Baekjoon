/*
 * Author : JC
 * https://www.acmicpc.net/problem/2505
*/

#include <iostream>
#include <algorithm>
#include <string.h>

using namespace std;

int n, idx;
int arr[10001];
int brr[10001];
int a[2], b[2];

int main(){

    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> arr[i];
    }
    
    memcpy(brr, arr, sizeof(arr));
    a[0] = a[1] = b[0] = b[1] = 1;
    
    for(int i=1; i<=n; i++){
        if(i != arr[i]){
            for(int j=i+1; j<=n; j++){
                if(i == arr[j]){
                    a[idx] = i;
                    b[idx++] = j;
                    reverse(arr+i, arr+j+1);
                    break;
                }
            }
            if(idx == 2){
                break;
            }
        }
    }
    
    bool check = false;
    for(int i=1; i<=n; i++){
        if(i != arr[i]){
            check = true;
            break;
        }
    }
    
    if(!check){
        cout << a[0] << " " << b[0] << "\n";
        cout << a[1] << " " << b[1] << "\n";
    }else{
        a[0] = a[1] = b[0] = b[1] = 1;
        idx = 0;
        for(int i=n; i>=1; i--){
            if(i != brr[i]){
                for(int j=i-1; j>=1; j--){
                    if(i == brr[j]){
                        a[idx] = j;
                        b[idx++] = i;
                        reverse(brr+j, brr+i+1);
                        break;
                    }
                }
                if(idx == 2) break;
            }
        }
        cout << a[0] << " " << b[0] << "\n";
        cout << a[1] << " " << b[1] << "\n";
    }
    
    return 0;
}