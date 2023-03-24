/*
 * Author : JC
 * https://www.acmicpc.net/problem/1475
*/

#include <iostream>
#include <string>

using namespace std;

int alpha[10];
string str;

int main(){
    
    cin >> str; 
    int len = str.length();
    for(int i=0; i<len; i++){
        alpha[str[i]-'0']++;
    } 

    int sum = (alpha[6] + alpha[9] + 1) / 2;
    for(int i=0; i<10; i++){
        if(i != 6 && i != 9){
            if(sum < alpha[i]){
                sum = alpha[i];
            }
        }
    }

    cout << sum;

    return 0;
}