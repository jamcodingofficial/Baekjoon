/*
 * Author : JC
 * https://www.acmicpc.net/problem/25400
*/

#include <iostream>

using namespace std;

int n, m, cnt, check = 1;

int main(){

    cin >> n;
    
    for(int i=0; i<n; i++){
        cin >> m;
        if(m != check){
            cnt++;
        }
        else{
            check++;
        }
    }
    
    cout << cnt;
    
    return 0;
}