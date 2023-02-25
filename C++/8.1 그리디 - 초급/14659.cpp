
/*
 * Author : JC
 * https://www.acmicpc.net/problem/14659
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, res;
int arr[30000];

int main(){
    
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    
    for(int i=0; i<n-1; i++){
        int cnt = 0;
        for(int j=i+1; j<n; j++){
            if(arr[i] > arr[j]){
                cnt++;
            }else{
                break;
            }
        }
        res = max(res, cnt);
    }
    
    cout << res;
    
    return 0;
}