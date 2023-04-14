/*
 * Author : JC
 * https://www.acmicpc.net/problem/5430
*/

#include <iostream>
#include <deque>

using namespace std;

int t, n;
string p, x;

int main(){
    
    cin >> t;
    for(int i=0; i<t; i++){
        cin >> p >> n >> x;
        int len = x.length();
        string tmp;
        deque<int> d;
        for(int j=0; j<len; j++){
            if(x[j] == ',' || x[j] == ']'){
                if(!tmp.empty()){
                    d.push_back(stoi(tmp));
                }
                tmp = "";
            }else if(x[j] >= '0' && x[j] <= '9'){
                tmp += x[j];
            }
        }
        len = p.length();
        bool check = true, next = true;
        for(int j=0; j<len; j++){
            if(p[j] == 'R'){
                check = !check;
            }else{
                if(d.empty()){
                    cout << "error\n";
                    next = false;
                    break;
                }
                if(check){
                    d.pop_front();
                }else{
                    d.pop_back();
                }
            }
        }
        if(!next) continue;
        cout << "[";
        if(check){
            len = d.size();
            for(int j=0; j<len; j++){
                if(j==len-1){
                    cout << d[j];
                }else{
                    cout << d[j] << ",";
                }
            }
        }else{
            len = d.size()-1;
            for(int j=len; j>=0; j--){
                if(j==0){
                    cout << d[j];
                }else{
                    cout << d[j] << ",";
                }
            }
        }
        cout << "]\n";
    }

    return 0;   
}