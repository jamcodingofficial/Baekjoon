/*
 * Author : JC
 * https://www.acmicpc.net/problem/17618
*/

#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    if(n <= 9){
        cout << n;
    }else{
        int ans = 9;
        for(int i=10; i<=n; i++){ 
            int tmp = i;
            int sum = 0;
            while(tmp){
                sum += tmp % 10;
                tmp /= 10;
            } 
            if(i % sum == 0){
                ans++;
            }
            
        }
        cout << ans;
    }
    return 0;
}