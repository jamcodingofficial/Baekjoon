/*
 * Author : JC
 * https://www.acmicpc.net/problem/1929
*/

#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int m, n;
bool check[1000001];

int main(){
    
    
    cin >> m >> n;
    
    fill(check, check+1000001, true);
    check[1] = false;
    
    for(int i=2; i<=sqrt(n); i++){
        if(check[i]){
            for(int j=i+i; j<=n; j+=i){
                check[j] = false;
            }
        }
    }
    
    for(int i=m; i<=n; i++){
        if(check[i]){
            cout << i << "\n";
        }
    }
    
    return 0;
}