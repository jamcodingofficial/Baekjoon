/*
 * Author : JC
 * https://www.acmicpc.net/problem/22341
*/

#include <iostream>

using namespace std;

int n, c;
int r1, r2;

int main(){

    cin >> n >> c;
    r1 = n;
    r2 = n;

    for(int i=0; i<c; i++){
        int x, y;
        cin >> x >> y;
        if(x > r1 || y > r2) continue;
        if(x * r2 < y * r1){
            r2 = y;
        }else{
            r1 = x;
        }
    }

    cout << r1 * r2;
    return 0;
}