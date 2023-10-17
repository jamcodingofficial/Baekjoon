/*
 * Author : JC
 * https://www.acmicpc.net/problem/9663
*/

#include <iostream>

using namespace std;

int map[15];
int n, cnt;

int promising(int cur){
    for(int i=0; i<cur; i++){
        if(map[cur] == map[i] || cur - i == abs(map[cur] - map[i])){
            return 0;
        }
    }
    return 1;
}

void nqueen(int row){
    if(row == n){
        cnt++;
        return;
    }else{
        for(int column=0; column<n; column++){
            map[row] = column;
            if(promising(row)){
                nqueen(row+1);
            }
        }
    }
}

int main(){
    cin >> n;
    nqueen(0);
    cout << cnt;
    
    return 0;
}