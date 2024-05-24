/*
 * Author : JC
 * https://www.acmicpc.net/problem/11728
*/

#include <iostream>

using namespace std;

int A[1000000], B[10000000];
int N, M;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    cin >> N >> M;
    
    for(int i=0; i<N; i++){
        cin >> A[i];
    }
    for(int i=0; i<M; i++){
        cin >> B[i];
    }
    
    int l = 0, r = 0;
    while(l < N && r < M){
        if(A[l] > B[r]){
            cout << B[r++] << " ";
        }else{
            cout << A[l++] << " ";
        }
    }
    
    for(int i=l; i<N; i++){
        cout << A[i] << " ";
    }
    for(int i=r; i<M; i++){
        cout << B[i] << " ";
    }
    
    return 0;
}
