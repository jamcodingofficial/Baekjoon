/*
 * Author : JC
 * https://www.acmicpc.net/problem/2562
*/

#include <iostream>
 
using namespace std;
 
int max_num, max_idx;

int main() {
    
    for(int i=0; i<9; i++){
        int t;
        cin >> t;
        if(max_num < t){
            max_num = t;
            max_idx = i+1;
        }
    }

    cout << max_num << "\n";
    cout << max_idx << "\n";
    
    return 0;
}