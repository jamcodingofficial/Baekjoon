/*
 * Author : JC
 * https://www.acmicpc.net/problem/2018
*/

#include <iostream>

using namespace std;

int n, sum, cnt;

int main(){
    int n;
    cin >> n;
    int left = 1;
    int right = 1;
    
    while(left <= n){
        if(sum < n){
            sum += right++;
        }else if(sum >= n){
            if(sum == n){
                cnt++;
            }
            sum -= left++;
        }
    }
    
    cout << cnt;

    return 0;
}