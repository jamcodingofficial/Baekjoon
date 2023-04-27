/*
 * Author : JC
 * https://www.acmicpc.net/problem/11170
*/

#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int n, m;
        cin >> n >> m;
        int cnt = 0;
        for(int j=n; j<=m; j++){
            int tmp = j;
            if(tmp == 0){
                cnt++;
                continue;
            }
            while(tmp){
                if(tmp % 10 == 0){
                    cnt++;
                }
                tmp /= 10;
            }
        }
        cout << cnt << "\n";
    }
    
    return 0;
}