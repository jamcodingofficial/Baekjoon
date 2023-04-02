/*
 * Author : JC
 * https://www.acmicpc.net/problem/1769
*/

#include <iostream>
#include <string>

using namespace std;

string s;
int cnt, sum;
bool check = true;

int main() {
    
    cin >> s;
    int len = s.length();
    
    for(int i=0; i<len; i++){
        sum += s[i] - '0';
    }
    
    while(sum > 9) {
        check = false;
        int tmp = sum;
        sum = 0;
        while(tmp > 0) {
            sum += tmp % 10;
            tmp /= 10;
        }
        cnt++;
    }
    
    if(check == true){
        cout << 0 << "\n";
    }else{
        cout << cnt + 1 << "\n";
    }

    if(sum % 3 == 0){
        cout << "YES";
    }else{
        cout << "NO";
    }

    return 0;
}