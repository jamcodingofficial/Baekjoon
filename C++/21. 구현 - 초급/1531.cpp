/*
 * Author : JC
 * https://www.acmicpc.net/problem/1531
*/

#include <iostream>

using namespace std;

int arr[101][101];
int n, m, cnt;

int main(){
    
    cin >> n >> m;
    while(n--){
        int a, b,c, d;
        cin >> a >> b >> c >> d; 
        for(int i=a; i<=c; i++){
            for(int j=b; j<=d; j++){
                arr[i][j]++;
            }
        }
    }
    
    for(int i=1; i<=100; i++){
        for(int j=1; j<=100; j++){
            if(arr[i][j] != 0 && arr[i][j] > m){
                cnt++;
            }
        }
    }

    cout << cnt;
    
    return 0;
}