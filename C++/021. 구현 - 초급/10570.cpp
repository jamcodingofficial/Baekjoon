/*
 * Author : JC
 * https://www.acmicpc.net/problem/10570
*/

#include <iostream>
#include <string.h>

using namespace std;

int arr[1001];
int t;

int main(){
    
    cin >> t;
    for(int i=0; i<t; i++){
        int v;
        int tmp = 0;
        int res = 0;
        cin >> v;
        for(int j=0; j<v; j++){
            int s;
            cin >> s;
            arr[s]++;
        }
        for(int j=1; j<=1000; j++){
            if(tmp < arr[j]){
                tmp = arr[j];
                res = j;
            }
        }
        cout << res << "\n";
        memset(arr, 0, sizeof(arr));
    }

    return 0;
}
