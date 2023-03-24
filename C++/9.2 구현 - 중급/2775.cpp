/*
 * Author : JC
 * https://www.acmicpc.net/problem/2775
*/

#include <iostream>

using namespace std;

int arr[15][15];
int t, k, n;

int main() {
    
    cin >> t;    
    for(int i=1; i<=14; i++){
        arr[0][i] = i;
    }
    
    for(int i=1; i<=14; i++){
        for(int j=1; j<=14; j++){
            arr[i][j] = arr[i][j-1] + arr[i-1][j];
        }
    }
    
    for(int i=0; i<t; i++){
        cin >> k >> n; 
        cout << arr[k][n] << "\n";
    }

    return 0;
}