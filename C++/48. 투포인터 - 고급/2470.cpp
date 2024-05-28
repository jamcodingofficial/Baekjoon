/*
 * Author : JC
 * https://www.acmicpc.net/problem/2470
*/

#include <iostream>
#include <algorithm>

using namespace std;

int arr[100000];

int main() {
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    sort(arr, arr+n);
    
    int low = 0;
    int high = n-1;
    int smallest = 2e9;
    int pone, ptwo;
    
    while(low < high){
        int a = arr[low]; 
        int b = arr[high]; 
        if(abs(a+b) < smallest){
            smallest = abs(a+b); 
            pone = arr[low];
            ptwo = arr[high];
        }
        if(a+b < 0){
            low++;
        }else{
            high--;
        }
    }
    cout << pone << " " << ptwo;

    return 0;
}