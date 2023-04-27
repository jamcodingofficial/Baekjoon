/*
 * Author : JC
 * https://www.acmicpc.net/problem/2303
*/

#include <iostream>

using namespace std;

int n;
int ans, res;

int main(){
    
    cin >> n;
    for(int i=0; i<n; i++){
        int arr[5];
        for(int j=0; j<5; j++){
            cin >> arr[j];
        }
        for(int j=0; j<5; j++){
            for(int k=j+1; k<5; k++){
                for(int x=k+1; x<5; x++){
                    int s = (arr[j] + arr[k] + arr[x]) % 10;
                    if(ans <= s){
                        ans = s;
                        res = i+1;
                    }
                }
            }
        }
    }
    cout << res;
    
    return 0;
}