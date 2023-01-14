/*
 * Author : JC
 * https://www.acmicpc.net/problem/10866
*/

#include <iostream>
#include <deque>

using namespace std;

int n, m;
string str;
deque<int> d;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> str;
        if(str == "push_back"){
            cin >> m;
            d.push_back(m);
        }else if(str == "push_front"){
            cin >> m;
            d.push_front(m);
        }else if(str == "pop_front"){
            if(!d.empty()){
                cout << d.front() << "\n";
                d.pop_front();
            }else{
                cout << "-1\n";
            }
        }else if(str == "pop_back"){
            if(!d.empty()){
                cout << d.back() << "\n";
                d.pop_back();
            }else{
                cout << "-1\n";
            }
        }else if(str == "size"){
            cout << d.size() << "\n";
        }else if(str == "empty"){
            cout << d.empty() << "\n";
        }else if(str == "front"){
            if(!d.empty()){
                cout << d.front() << "\n";
            }else{
                cout << "-1\n";
            }
        }else{
            if(!d.empty()){
                cout << d.back() << "\n";
            }else{
                cout << "-1\n";
            }
        }
    }
 
    return 0;
}