/*
 * Author : JC
 * https://www.acmicpc.net/problem/2659
*/

#include <iostream>

using namespace std;

int a, b, c, d;

int clock_number(int x){
    int tmp = x;
    for(int i=0; i<3; i++){
        tmp = tmp % 1000 * 10 + tmp / 1000;
        if(x > tmp){
            x = tmp;
        }
    }
    return x;
}

int main() {
    
    cin >> a >> b >> c >> d;
    a = a * 1000 + b * 100 + c * 10 + d;
    
    int r = clock_number(a);
    int cnt = 0;
    for(int i=1111; i<r; i++){
        if(i == clock_number(i)){
            cnt++;
        }
    }
    cout << cnt + 1;
    
    return 0;
}