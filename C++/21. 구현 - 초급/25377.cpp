/*
 * Author : JC
 * https://www.acmicpc.net/problem/25377
*/

#include <iostream>
 
using namespace std;
 
int n;
int m = 1001;

int main() {
    
    cin >> n;
    for(int i=0; i<n; i++){
        int a, b;
        cin >> a >> b;
        if(a > b) continue;
        m = min(m ,b);
    }
    
    if(m == 1001){
        cout << -1;
    }else{
        cout << m;
    }
    
    return 0;
}