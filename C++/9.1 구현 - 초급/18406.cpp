/*
 * Author : JC
 * https://www.acmicpc.net/problem/18406
*/

#include <iostream>

using namespace std;

string str;

int add(int s, int e){
    int sum = 0;
    for(int i=s; i<e; i++){
        sum += str[i]-'0';
    }
    return sum;
}

int main(){

    cin >> str;
    int len = str.length();
    
    if(add(0, len/2) == add(len/2, len)){
        cout << "LUCKY";
    }else{
        cout << "READY";
    }
    
    return 0;
}