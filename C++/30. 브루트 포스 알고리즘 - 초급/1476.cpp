/*
 * Author : JC
 * https://www.acmicpc.net/problem/1476
*/

#include <iostream>

using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    int e = 1, s = 1, m = 1;
    int cnt = 1;
    while(e != a || s != b || m != c){
        e++;
        s++;
        m++;
        if(e >= 16){
            e = 1;
        }
        if(s >= 29){
            s = 1;
        }
        if(m >= 20){
            m = 1;
        }
        cnt++;
    }
    cout << cnt;
    return 0;
}