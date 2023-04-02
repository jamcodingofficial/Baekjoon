/*
 * Author : JC
 * https://www.acmicpc.net/problem/23055
*/

#include <iostream>

using namespace std;

int n;
char map[21][21];

int main(){

    cin >> n;
    
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i == 1 || i == n || j == 1 || j == n){
                map[i][j] = '*';
            }
        }
        map[i][i] = '*';
        map[i][n-i+1] = '*';
    }
    
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(map[i][j] == '\0')cout << " ";
            else cout << map[i][j];
        }
        cout << "\n";
    }
    
    return 0;
}