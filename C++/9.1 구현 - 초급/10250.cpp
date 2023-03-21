/*
 * Author : JC
 * https://www.acmicpc.net/problem/10250
*/

#include <iostream>

using namespace std;

int t;
int h, w, n;

int main() {

    cin >> t;
    for (int i = 0; i < t; i++) {        
        cin >> h >> w >> n; 
        
        int a = n % h; 
        int b = n / h; 
        if(a == 0){
            a = h;
        }else{
            b++;
        }
        cout << a * 100 + b << "\n";   
    }

    return 0;
}