/*
 * Author : JC
 * https://www.acmicpc.net/problem/2495
*/

#include <iostream>
#include <string>

using namespace std;

string s;
int cnt, res;

int main(){

    for(int i=0; i<3; i++){
        cin >> s;
        cnt = 1;
        res = 0;
        for(int j=0; j<7; j++){
            if(s[j] == s[j+1]){
                cnt++;
            }else{
                cnt = 1;
            }
            if(res < cnt){
                res = cnt;
            }
        }
        cout << res << "\n";
    }

    return 0;
}
