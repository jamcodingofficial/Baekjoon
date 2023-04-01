/*
 * Author : JC
 * https://www.acmicpc.net/problem/10757
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

string s1, s2;
vector<int> v;
int tmp, s1_length, s2_length;

void check(string &s, int &len){
    while(true){
        v.push_back(((s[len]-'0') + tmp) % 10);
        tmp = ((s[len]-'0') + tmp) / 10;
        len--;
        if(len < 0) return;
    }
}

int main(){
    
    cin >> s1 >> s2;
    s1_length = s1.length() - 1;
    s2_length = s2.length() - 1;
    
    while(true){
        if(s1_length >= 0 && s2_length >= 0){
            v.push_back(((s1[s1_length]-'0' + s2[s2_length]-'0') + tmp) % 10);
            tmp = ((s1[s1_length]-'0' + s2[s2_length]-'0') + tmp) / 10;
            s1_length--;
            s2_length--;
        }
        if(s1_length >=0 && s2_length < 0) check(s1, s1_length);
        if(s1_length <0 && s2_length >=0) check(s2, s2_length);
        if(s1_length < 0 && s2_length < 0) break;
    }
    
    if(tmp != 0) v.push_back(tmp);
    
    reverse(v.begin(), v.end());
    
    for(int i=0; i<v.size(); i++){
        cout << v[i];
    }

    return 0;
}