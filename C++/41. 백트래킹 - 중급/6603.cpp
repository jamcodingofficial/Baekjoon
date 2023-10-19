/*
 * Author : JC
 * https://www.acmicpc.net/problem/6603
*/

#include <iostream>

using namespace std;

int arr[13], ans[13];
int t;

void backtracking(int depth, int idx){
    if(depth == 6){
        for(int i=0; i<6; i++){
            cout << ans[i] << " ";
        }
        cout << "\n";
        return;
    }
    
    for(int i=idx; i<t; i++){
        ans[depth] = arr[i]; 
        backtracking(depth+1, i+1);
    }
}

int main(){
    while(true){
        cin >> t;
        if(t == 0) break;
        for(int i=0; i<t; i++){
            cin >> arr[i];
        } 
        backtracking(0, 0);
        cout << "\n";
    }

    return 0;
}