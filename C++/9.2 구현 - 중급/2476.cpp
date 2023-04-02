/*
 * Author : JC
 * https://www.acmicpc.net/problem/2476
*/

#include <iostream>
#include <algorithm>

using namespace std;

int n, res;
int a[3];

int main(){
    
    cin >> n;
    for(int i=0; i<n; i++){
        
        cin >> a[0] >> a[1] >> a[2];
        sort(a, a+3);
        int sum = 0;
        if(a[0] == a[2]){
            sum = sum + 10000 + a[0] * 1000;
        }else if(a[0] != a[1] && a[1] != a[2]){
            sum = sum + a[2] * 100;
        }else{
            sum = sum + 1000 + a[1] * 100;
        }
        res = max(res, sum);
    }
    cout << res;
    
    return 0;
}