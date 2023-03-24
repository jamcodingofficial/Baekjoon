/*
 * Author : JC
 * https://www.acmicpc.net/problem/1526
*/

#include <iostream>

using namespace std;

int n;

int main(){

    cin >> n;
    for(int i=n; i>=4; i--){
        int tmp = i;
        while(tmp%10 == 4 || tmp%10 == 7){
            tmp = tmp / 10;
        }
        if(tmp==0){
            cout <<i;
            break;
        }
    }

    return 0;
}