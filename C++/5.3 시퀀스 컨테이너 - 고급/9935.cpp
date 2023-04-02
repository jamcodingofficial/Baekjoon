/*
 * Author : JC
 * https://www.acmicpc.net/problem/9935
*/

#include <iostream>
#include <vector>

using namespace std;

string s1, s2;
vector<char> v;

int main(){
    cin >> s1 >> s2;
    int len1 = s1.length();
    int len2 = s2.length();
    
    for(int i=0; i<len1; i++){
        v.push_back(s1[i]);
        int v_size = v.size();
        if(v_size >= len2){
            bool flag = true;
            for(int j=0; j<len2; j++){
                if(s2[j] != v[v_size - len2 +j]){
                    flag = false;
                    break;
                }
            }
            
            if(flag){
                for(int j=0; j<len2; j++){
                    v.pop_back();
                }
            }
        }
    }
    
    if(v.empty()){
        cout << "FRULA";
    }else{
        for(int i=0; i<v.size(); i++){
            cout << v[i];
        }
    }
}