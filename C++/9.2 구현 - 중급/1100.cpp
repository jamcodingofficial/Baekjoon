/*
 * Author : JC
 * https://www.acmicpc.net/problem/1100
*/

#include <iostream>

using namespace std;

char map[8][9];

int main(){
    
    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            cin >> map[i][j];
        }
    }
    
    int cnt = 0;
    for(int i=0; i<8; i++){
        for(int j=0; j<8; j+=2){
            if(map[i][j] == 'F'){
                cnt++;
            }
        }
        i++;
        for(int j=1; j<8; j+=2){
            if(map[i][j] == 'F'){
                cnt++;
            }
        }
    }

    cout << cnt;

    return 0;
}