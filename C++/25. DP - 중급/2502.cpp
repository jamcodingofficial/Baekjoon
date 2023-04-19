/*
 * Author : JC
 * https://www.acmicpc.net/problem/2502
*/

#include <iostream>
#include <vector>

using namespace std;

int X[31];
int Y[31];

int main() {
    
    int n, m;
    cin >> n >> m; 
    X[1] = 1;
    Y[2] = 1;

    for(int i=3; i<=30; i++){
        X[i] = X[i-2] + X[i-1];
        Y[i] = Y[i-2] + Y[i-1];
    }

    int a = X[n];
    int b = Y[n];

    for(int i=1; i<=100000; i++){
        if((m - (a * i)) % b == 0){
            cout << i << endl;
            cout << (m - (a * i)) / b;
            return 0;
        }
    }

    return 0;
}