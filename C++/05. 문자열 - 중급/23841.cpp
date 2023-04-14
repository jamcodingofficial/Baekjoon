/*
 * Author : JC
 * https://www.acmicpc.net/problem/23841
*/

#include <iostream>
#include <string>

using namespace std;

int n, m;
char arr[50][51];

int main(){

    cin >> n >> m;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j] != '.'){
                arr[i][m-j-1] = arr[i][j];
            }
        }
    }
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << arr[i][j];
        }
        cout << "\n";
    }

    return 0;
}