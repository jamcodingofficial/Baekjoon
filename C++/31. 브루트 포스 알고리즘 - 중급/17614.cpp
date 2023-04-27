/*
 * Author : JC
 * https://www.acmicpc.net/problem/17614
*/

#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int cnt = 0;
    for(int i=1; i<=n; i++){
        int tmp = i;
        while(tmp){
            if(tmp % 10 == 3 || tmp % 10 == 6 || tmp % 10 == 9){
                cnt++;
            }
            tmp /= 10;
        }
    }
    cout << cnt;
    
    return 0;
}