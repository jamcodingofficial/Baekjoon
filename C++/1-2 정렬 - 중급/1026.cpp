/*
 * Author : JC
 * https://www.acmicpc.net/problem/1026
*/

#include<iostream>

using namespace std;

int arr[50], brr[50];
int n, sum;

int main(){

    cin >> n;

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    for(int i=0; i<n; i++){
        cin >> brr[i];
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

    for(int i=n; i>=0; i--){
        for(int j=0; j<i; j++){
            if(brr[j] < brr[j+1]){
                int tmp = brr[j];
                brr[j] = brr[j+1];
                brr[j+1] = tmp;
            }
        }
    }
    
    for(int i=0; i<n; i++){
        sum = sum + (arr[i]*brr[i]);
    }

    cout << sum;

    return 0;
}