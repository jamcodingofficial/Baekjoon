/*
 * Author : JC
 * https://www.acmicpc.net/problem/1120
*/

#include <iostream>
#include <string>

using namespace std;

string a, b;
int cnt, res = 50;

int main(){
    
    cin >> a >> b;
    
    int a_len = a.length();
    int b_len = b.length();
    
    for(int i=0; i<=b_len - a_len; i++){
        int idx = 0;
        cnt = 0;
        for(int j=i; j<a_len+i; j++){
            if(a[idx] != b[j]){
                cnt++;
            }
            idx++;
        }
        if(res > cnt){
            res = cnt;
        }
    }
    
    cout << res;
    
    return 0;
}