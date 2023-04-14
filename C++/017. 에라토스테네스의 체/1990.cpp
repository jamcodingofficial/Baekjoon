/*
 * Author : JC
 * https://www.acmicpc.net/problem/1990
*/

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

bool check[10000001];

int palindrome(int x){
    string s1 = to_string(x);
    string s2 = s1;
    reverse(s2.begin(), s2.end());
    if(s1 == s2){
        return 1;
    }else{
        return 0;
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    fill(check, check+10000001, true);
    check[1] = false;
    for(int i=2; i<=10000001; i++){
        if(check[i] == true){
            for(int j=i+i; j<=10000001; j+=i){
                check[j] = false;
            }
        }
    }

    int a, b;
    cin >> a >> b;
    for(int i=a; i<=10000000; i++){
        if(i > b) break;
        if(palindrome(i) && check[i]){
            cout << i << "\n";
        }
    }
    cout << "-1";

    return 0;
}