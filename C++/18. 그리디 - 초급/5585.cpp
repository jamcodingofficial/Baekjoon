/*
 * Author : JC
 * https://www.acmicpc.net/problem/5585
*/

#include <iostream>

using namespace std;

int n, res;
int jpy[6] = {500, 100, 50, 10, 5, 1};

int main(){
    
    cin >> n;
    n = 1000 - n;
    
    for(int i=0; i<6; i++){
        res += n / jpy[i];
        n %= jpy[i];
    }
    
    cout << res;
    
    return 0;
}