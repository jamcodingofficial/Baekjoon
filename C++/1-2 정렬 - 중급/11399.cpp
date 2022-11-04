/*
 * Author : JC
 * https://www.acmicpc.net/problem/11399
*/

#include<iostream>

using namespace std;

int arr[1000];
int n, sum;

int main(){

    cin >> n;

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    
    for(int i=n-1; i>=0; i--){
        for(int j=0; j<i; j++){
            if(arr[j] > arr[j+1]){
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            sum += arr[j];
        }
    }

    cout << sum;

    return 0;
}