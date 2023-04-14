/*
 * Author : JC
 * https://www.acmicpc.net/problem/10162
*/

#include <iostream>

using namespace std;

int t;
int minutes[3] = {300, 60, 10};
int res[3];

int main(){
    
    cin >> t;
    
    if(t % 10 != 0){
        cout << -1;
    }else{
        for(int i=0; i<3; i++){
            res[i] = t / minutes[i];
            t %= minutes[i];
        }
        
        for(int i=0; i<3; i++){
            cout << res[i] << " ";
        }
    }
    
    return 0;
}