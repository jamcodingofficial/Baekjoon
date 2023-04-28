/*
 * Author : JC
 * https://www.acmicpc.net/problem/2502
*/

#include <iostream>

using namespace std;

int A[31], B[31];

int main(){
    int d, k;
    cin >> d >> k;
    A[1] = 1;
    B[2] = 1;
    for(int i=3; i<=30; i++){
        A[i] = A[i-1] + A[i-2];
        B[i] = B[i-1] + B[i-2];
    }
    
    int r1 = A[d];
    int r2 = B[d];
    
    for(int i=1; i<=100000; i++){
        if((k - (i * r1)) % r2 == 0){
            cout << i << "\n";
            cout << (k - (i * r1)) / r2 << "\n";
            break;
        }
    }
    
    return 0;
}