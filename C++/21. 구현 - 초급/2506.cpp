/*
 * Author : JC
 * https://www.acmicpc.net/problem/2506
*/

#include <iostream>
 
using namespace std;
 
int n, t;
int sum, cnt;

int main() {
    
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> t;
        if(t == 1){
            cnt++;
        }else{
            cnt = 0;
        }
        sum += cnt;
    }
    
    cout << sum;
    
    return 0;
}