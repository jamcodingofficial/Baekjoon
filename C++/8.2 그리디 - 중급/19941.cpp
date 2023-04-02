/*
 * Author : JC
 * https://www.acmicpc.net/problem/19941
*/

#include <iostream>
#include <algorithm>

using namespace std;

int n, k, cnt;
string s;

int main(){
    
    cin >> n >> k >> s;
    
    for(int i=0; i<n; i++){
        if(s[i] == 'P'){
            for(int j=i-k; j<=i+k; j++){
                if(s[j] == 'H'){
                    s[j] = 'X';
                    cnt++;
                    break;
                }
            }
        }
    }
    
    cout << cnt;
    
    return 0;
}