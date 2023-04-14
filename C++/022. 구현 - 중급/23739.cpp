/*
 * Author : JC
 * https://www.acmicpc.net/problem/23739
*/

#include <iostream>

using namespace std;

int n, ans;

int main(){

    cin >> n;
    int time = 30;
    for(int i=0; i<n; i++){ 
        int m;
        cin >> m;
        if(m <= time * 2){
            ans++;
        }
        time -= m;
        if(time <= 0){
            time = 30;
        }
    }

    cout << ans;
    
    return 0;
}