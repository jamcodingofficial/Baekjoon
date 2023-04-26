/*
 * Author : JC
 * https://www.acmicpc.net/problem/1065
*/

#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    if(n < 100){
        cout << n;
    }else{
        int cnt = 99;
        for(int i=100; i<=n; i++){
            int a = i / 100;
            int b = i / 10 % 10;
            int c = i % 10;
            if(b - a == c - b){
                cnt++;
            }
        }
        cout << cnt;
    }
    return 0;
}