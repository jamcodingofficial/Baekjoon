/*
 * Author : JC
 * https://www.acmicpc.net/problem/2578
*/

#include <iostream>

using namespace std;

int bingo[5][5], number[5][5];
int res;

int find_bingo(){
    int cnt = 0, check = 0;
    
    // 가로 빙고 체크
    for(int i=0; i<5; i++){
        cnt = 0;
        for(int j=0; j<5; j++){
            if(bingo[i][j] == 0){
                cnt++;
            }
        }
        if(cnt == 5){
            check++;
        }
    }
    
    // 세로 빙고 체크
    for(int i=0; i<5; i++){
        cnt = 0;
        for(int j=0; j<5; j++){
            if(bingo[j][i] == 0){
                cnt++;
            }
        }
        if(cnt == 5){
            check++;
        }
    }
    cnt = 0;
    
    // 11시 -> 5시 방향 대각선 빙고 체크
    for(int i=0; i<5; i++){
        if(bingo[i][i] == 0){
            cnt++;
        }
    }
    if(cnt == 5){
        check++;
    }
    cnt = 0;
    
    // 1시 -> 7시 방향 대각선 빙고 체크
    for(int i=0; i<5; i++){
        if(bingo[i][5-i-1] == 0){
            cnt++;
        }
    }
    if(cnt == 5){
        check++;
    }
    
    // 3빙고 이상일 경우 res 반환, 그렇지 않으면 -1 반환
    if(check >= 3){
        return res;
    }else{
        return -1;
    }
}

int fund_number(int x){
    bool flag = 0;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            if(bingo[i][j] == x){
                bingo[i][j] = 0;
                flag = 1;
                break;
            }
        }
        if(flag == 1){
            break;
        }
    }
    if(find_bingo() != -1){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin >> bingo[i][j];
        }
    }
    
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin >> number[i][j];
        }
    }
    
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            res++;
            if(fund_number(number[i][j])){
                cout << res;
                return 0;
            }
        }
    }
    
    return 0;
}