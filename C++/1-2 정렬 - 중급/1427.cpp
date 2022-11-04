/*
 * Author : JC
 * https://www.acmicpc.net/problem/1427
*/

#include<iostream>

using namespace std;

int arr[1000000];
int n, idx;

int main(){

    cin >> n;

    while(n){
        arr[idx] = n%10;
        n /= 10;
        idx++;
    }
    
    for(int i=idx; i>=0; i--){
        for(int j=0; j<i; j++){
            if(arr[j] < arr[j+1]){
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }
    
    for(int i=0; i<idx; i++){
        cout << arr[i];
    }

    return 0;
}