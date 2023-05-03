/*
 * Author : JC
 * https://www.acmicpc.net/problem/2615
*/

#include <iostream>

using namespace std;

int map[19][20];
int i;

int check(int x, int y){
    for(i=1; i<5; i++){ // 오른쪽
        if(map[x][y] != map[x][y+i]){
            break;
        }
    }
    if(i == 5){ // 오목 성공. 육목 체크.
        if((map[x][y] != map[x][y+i] || y == 14) && (map[x][y] != map[x][y-1] || y==0)){
            return 1;
        }
    }
    
    for(i=1; i<5; i++){ // 아래
        if(map[x][y] != map[x+i][y]){
            break;
        }
    }
    if(i==5){ // 오목 성공. 육목 체크.
        if((map[x][y] != map[x+i][y] || x==14) && (map[x][y] != map[x-1][y] || x==0)){
            return 1;
        }
    }
    
    for(i=1; i<5; i++){ // 11시 -> 5시 방향 대각선 체크
        if(x+i <= 18){
            if(map[x][y] != map[x+i][y+i]){
                break;
            }
        }else{
            break;
        }
    }
     
    if(i==5){ // 오목 성공. 육목 체크.
        if((map[x][y] != map[x+i][y+i] || x==14 || y==14) && (map[x][y] != map[x-1][y-1] || x==0 || y==0)){
            return 1;
        }
    }
    
    for(i=1; i<5; i++){ // 1시 -> 7시 방향 대각선 체크
            if(map[x][y] != map[x-i][y+i]){
                break;
            }
    }
    if(i==5){ // 오목 성공. 육목 체크.
        if((map[x][y] != map[x-i][y+i] || x==4 || y==14) && (map[x][y] != map[x+1][y-1] || x==14 || y==0)){
            return 1;
        }
    }
    return 0;
}

int main(){
    for(int i=0; i<19; i++){
        for(int j=0; j<19; j++){
            cin >> map[i][j];
        }
    }
    
    for(int i=0; i<19; i++){
        for(int j=0; j<19; j++){
            if(map[i][j] == 1 || map[i][j] == 2){
                int result = check(i, j);
                if(result ==1){
                    cout << map[i][j] << "\n";
                    cout << i+1 << " " << j+1 << "\n";
                    return 0;
                }
            }
        }
    }
    
    cout << 0;

    return 0;
}