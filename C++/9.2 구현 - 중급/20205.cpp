/*
 * Author : JC
 * https://www.acmicpc.net/problem/20205
*/

#include <iostream>

using namespace std;

int arr[10][10];
int n, k;

int main(){
    
    cin >> n >> k;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
        }
    }
    
    for(int i=0; i<n; i++){
        for(int j=0; j<k; j++){
            for(int k=0; k<n; k++){
                for(int x=0; x<k; x++){
                    cout << arr[i][k]<<" ";
                }
            }
            cout << "\n";
        }
    }
    
    return 0;
}