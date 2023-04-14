/*
 * Author : JC
 * https://www.acmicpc.net/problem/2292
*/

#include <iostream>

using namespace std;

int n;
int t = 1, c = 1;

int main(){
    
    cin >> n;
    while(1){
        if(n <= t){
            cout << c;
            break;
        }
        t += 6 * c++;
    }
    return 0;
}