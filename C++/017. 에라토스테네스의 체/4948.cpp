/*
 * Author : JC
 * https://www.acmicpc.net/problem/4948
*/

#include <iostream>
#include <algorithm>
#include <cmath>
#define MAX 250000

using namespace std;

int n;
bool check[MAX];

int main(){
    
    fill(check, check+MAX, true);
    check[1] = false;
    
    int s = sqrt(MAX);
    for(int i=2; i<=s; i++){
        if(check[i]){
            for(int j=i+i; j<=MAX; j+=i){
                check[j] = false;
            }
        }
    }
    
    while(1){
        cin >> n;
        if(n == 0){
            break;
        }
        int cnt = 0;
        for(int i=n+1; i<=n*2; i++){
            if(check[i]){
                cnt++;
            }
        }
        cout << cnt << "\n";
    }

    return 0;
}