/*
 * Author : JC
 * https://www.acmicpc.net/problem/2531
*/

#include <iostream>
#include <string.h>

using namespace std;

int n, d, k, c;
int sushi[30001];
bool check[30001];
int res;

int main(){
        
    cin >> n >> d >> k >> c;
    for(int i=0; i<n; i++){
        cin >> sushi[i];
    }

     
    for(int i=0; i<n; i++){
        int flag = 0;
        int coupon = 1;
        for(int j=i; j<i+k; j++){
            int t = j % n;
            if(!check[sushi[t]]){
                check[sushi[t]] = true;
            }else{
                flag++;
            }
            if(sushi[t] == c){
                coupon = 0;
            }
        }
        if(res < k - flag + coupon){
            res = k - flag + coupon;
        }
        memset(check, 0, sizeof(check));
    }
    
    cout << res;
    
    return 0;
}