/*
 * Author : JC
 * https://www.acmicpc.net/problem/2669
*/

#include <iostream>

using namespace std;

int arr[101][101];
int cnt;

int main(){

    for(int i=0; i<4; i++){
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        for(int j=a; j<c; j++){
            for(int k=b; k<d; k++){
                if(arr[j][k]){
                    continue;
                }
                arr[j][k] = 1;
                cnt++;
            }
        }
    }

    cout << cnt;

    return 0;
}