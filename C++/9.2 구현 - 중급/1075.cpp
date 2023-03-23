/*
 * Author : JC
 * https://www.acmicpc.net/problem/1075
*/

#include <iostream>

using namespace std;

int n, f, r;

int main(){
    
    cin >> n >> f;
    n = n / 100 * 100;

    while(1){
        if(n % f == 0){
            r = n % 100;
            break;
        }else{
            n++;
        }
    }
    
    printf("%02d", r);
    
    return 0;
}