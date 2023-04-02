/*
 * Author : JC
 * https://www.acmicpc.net/problem/2581
*/

#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int m, n;
bool check[10001];

int main(){
    
    cin >> m >> n;
    
    fill(check, check+10001, true);
    check[1] = false;
    
    int s = sqrt(n);
    for(int i=2; i<=s; i++){
        if(check[i]){
            for(int j=i+i; j<=n; j+=i){
                check[j] = false;
            }
        }
    }
    
    int sum = 0;
    int min_number = 10000;
    
    for(int i=m; i<=n; i++){
        if(check[i]){
            sum += i;
            min_number = min(min_number, i);
        }
        
    }
    
    if(sum != 0){
        cout << sum << "\n";
        cout << min_number;
        
    }else{
        cout << -1;
    }
    
    return 0;
}