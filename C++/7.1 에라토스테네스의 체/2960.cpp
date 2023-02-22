/*
 * Author : JC
 * https://www.acmicpc.net/problem/2960
*/

#include <iostream>
#include <algorithm>

using namespace std;

bool check[1001];
int n, k;

int main(){
    
    cin >> n >> k;
    fill(check, check+1001, true);
    check[1] = false;
    int cnt = 0;
    
    for(int i=2; i<=n; i++){
        for(int j=i; j<=n; j+=i){
            if(check[j] == true){
                check[j] = false;
                cnt++;
                if(cnt == k){
                    cout << j;
                    return 0;
                }
            }
        }
    }
    
    return 0;
}