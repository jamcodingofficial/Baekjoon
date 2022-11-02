/*
 * Author : JC
 * https://www.acmicpc.net/problem/24051
*/

#include <iostream>

using namespace std;
 
int A[10000];
int key, check, cnt, j;

int main(){
    int n, k;
    cin >> n >> k; 
    
    for(int i=0; i<n; i++){
        cin >> A[i];
    }

    for(int i=1; i<n; i++){ 
        key = A[i]; 
        check = 1;
        for(j=i-1; j>=0 && A[j] > key; j--){
            check = 0;
            A[j+1] = A[j];
            cnt++;
            if(cnt == k){
                cout << A[j+1];
                return 0;
            }
        }
        if(check == 1){
            continue;
        }
        A[j+1] = key;
        cnt++;
        if(cnt == k){
            cout << A[j+1];
            return 0;
        }
    }

    cout << -1;

    return 0;
}

