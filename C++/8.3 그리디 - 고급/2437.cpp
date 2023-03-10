/*
 * Author : JC
 * https://www.acmicpc.net/problem/2437
*/

#include <iostream>
#include <algorithm>

using namespace std;

int A[1000];
int n;

int main(){
    
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> A[i];
    }
    
    sort(A, A+n); 
    
    int sum = 0;
    for(int i=0; i<n; i++){
        if(sum + 2 <= A[i]){
            break;
        }
        sum += A[i];
    }
    cout << sum+1;
    
    return 0;
}