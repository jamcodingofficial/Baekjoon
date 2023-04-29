/*
 * Author : JC
 * https://www.acmicpc.net/problem/3085
*/

#include <iostream>

using namespace std;

int n;
string s[50];
int res;

void check(){
    int cnt = 1;
    // 가장 긴 연속 부분(행) 체크
    for(int i=0; i<n; i++){
        cnt = 1;
        for(int j=0; j<n-1; j++){
            if(s[i][j] == s[i][j+1]){
                cnt++;
                res = max(res, cnt);
            }else{
                cnt = 1;
            }
        }
    }
    // 가장 긴 연속 부분(열) 체크
    for(int i=0; i<n; i++){
        cnt = 1;
        for(int j=0; j<n-1; j++){
            if(s[j][i] == s[j+1][i]){
                cnt++;
                res = max(res, cnt);
            }else{
                cnt = 1;
            }
        }
    }
}

int main(){
    
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> s[i];
    }
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n-1; j++){
            // 좌표 i,j 기준으로 오른쪽과 다른지 비교
            if(s[i][j] != s[i][j+1]){
                swap(s[i][j], s[i][j+1]);
                check();
                swap(s[i][j], s[i][j+1]);
            }
            // 좌표 j,i 기준으로 아래쪽과 다른지 비교
            if(s[j][i] != s[j+1][i]){
                swap(s[j][i], s[j+1][i]);
                check();
                swap(s[j][i], s[j+1][i]);
            }
        }
    }
    cout << res;
    
    return 0;
}