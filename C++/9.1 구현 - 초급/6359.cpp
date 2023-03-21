/*
 * Author : JC
 * https://www.acmicpc.net/problem/6359
*/

#include <iostream>
#include <string.h>

using namespace std;

int A[101];
int t;

int main(){
    
    cin >> t;
    for(int i=0; i<t; i++){
        int n;
        cin >> n; 
        for(int j=1; j<=n; j++){
            A[j] = 1;
        }
        for(int j=2; j<=n; j++){
            for(int k=j; k<=n; k+=j){
                if(A[k] == 1){
                    A[k] = 0;
                }else{
                    A[k] = 1;
                }
            }
        }
        int cnt = 0;
        for(int j=1; j<=n; j++){
            if(A[j] == 1){
                cnt++;
            }
        }
        cout << cnt << "\n";
        memset(A, 0, sizeof(A));
    }

    return 0;
}