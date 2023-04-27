/*
 * Author : JC
 * https://www.acmicpc.net/problem/2798
*/

#include <iostream>

using namespace std;

int arr[100];

int main(){
    int n, m;
    cin >> n >> m;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int res = 0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            for(int k=j+1; k<n; k++){
                int t = arr[i] + arr[j] + arr[k];
                if(t <= m && res < t){
                    res = t;
                }
            }
        }
    }
    cout << res;
    
    return 0;
}