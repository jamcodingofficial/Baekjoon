/*
 * Author : JC
 * https://www.acmicpc.net/problem/1855
*/

#include <iostream>

using namespace std;

int k, idx;
string s;
char arr[11][201];

int main(){
    
    cin >> k >> s;
    int len = s.length();
    
    for(int i=0; i<len/k; i++){
        for(int j=0; j<k; j++){
            if(i % 2 == 0){
                arr[i][j] = s[idx++];
            }else{
                arr[i][k-j-1] = s[idx++];
            }
        }
    }
        
    for(int i=0; i<k; i++){
        for(int j=0; j<len/k; j++){
            cout << arr[j][i];
        }
    }
    
    return 0;
}