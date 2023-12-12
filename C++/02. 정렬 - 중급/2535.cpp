/*
 * Author : JC
 * https://www.acmicpc.net/problem/2535
*/

#include <iostream>

using namespace std;

int arr[100][3];
int check[100];
int n, cnt;

int main() {
    
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
    }
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n-1; j++){
            if(arr[j][2] < arr[j+1][2]){
                int tmp1 = arr[j][2];
                arr[j][2] = arr[j+1][2];
                arr[j+1][2] = tmp1;
                
                int tmp2 = arr[j][1];
                arr[j][1] = arr[j+1][1];
                arr[j+1][1] = tmp2;
                
                int tmp3 = arr[j][0];
                arr[j][0] = arr[j+1][0];
                arr[j+1][0] = tmp3;
            }
        }
    }

    for(int i=0; i<n; i++){
        if(check[arr[i][0]] < 2){
            check[arr[i][0]]++; 
            cout << arr[i][0] << " " << arr[i][1] << "\n";
            cnt++;
            if(cnt == 3){
                break;
            }
        }
    }

    return 0;
}