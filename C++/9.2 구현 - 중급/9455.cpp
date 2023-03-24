/*
 * Author : JC
 * https://www.acmicpc.net/problem/9455
*/

#include <iostream>
#include <string.h>

using namespace std;

int arr[100][100];
int t, m, n;

int main(){
    
    cin >> t;
    for(int i=0; i<t; i++){
        cin >> m >> n;
        int cnt = 0;
        for(int j=0; j<m; j++){
            for(int k=0; k<n; k++){
                cin >> arr[j][k];
            }
        }
        
        for(int j=m-2; j>=0; j--){ 
            for(int k=0; k<n; k++){
                if(arr[j][k] == 1){
                    arr[j][k] = 0;
                    for(int x=m-1; x>=0; x--){ 
                        if(arr[x][k] == 0){
                            arr[x][k] = 1;
                            cnt = cnt + (x-j);
                            break;
                        }
                    }
                }
            }
        }
        cout << cnt << "\n";
        memset(arr, 0, sizeof(arr));
    }

    return 0;
}
