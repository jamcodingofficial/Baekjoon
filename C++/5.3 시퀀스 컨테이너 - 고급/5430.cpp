/*
 * Author : JC
 * https://www.acmicpc.net/problem/5430
*/

#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;

int t;

int main(){

    cin >> t; 
    for(int i=0; i<t; i++){
        string p, x;
        int n;
        cin >> p >> n >> x;
        deque<int> v;
        x += ",";
        int len = x.length();
        string tmp = "";
        for(int j=0; j<len; j++){
            if(x[j] >= '0' && x[j] <= '9'){
                tmp += x[j];
            }else{
                if(!tmp.empty()){
                    v.push_back(stoi(tmp));
                    tmp.clear();
                }
            }
        } 
        
        bool check = false;
        int len2 = p.length();
        int flag = 0;
        for(int j=0; j<len2; j++){
            if(p[j] == 'R'){
                check = !check;
            }else{
                if(v.empty()){
                    cout << "error\n";
                    flag = 1;
                    break;
                }
                if(check == true){
                    v.pop_back();
                }else{
                    v.pop_front();
                }
            }
        }
        if(flag == 1) continue;
        cout << "[";
        if(check == true){
            while(!v.empty()){
                cout << v.back();
                v.pop_back();
                if(!v.empty()){
                    cout << ",";
                }
            }
        }else{
            while(!v.empty()){
                cout << v.front();
                v.pop_front();
                if(!v.empty()){
                    cout << ",";
                }
            }
        }
        cout << "]\n";
    }
    return 0;
}