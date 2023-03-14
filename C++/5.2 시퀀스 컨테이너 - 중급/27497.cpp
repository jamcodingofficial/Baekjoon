/*
 * Author : JC
 * https://www.acmicpc.net/problem/27497
*/

#include <iostream>
#include <stack>
#include <deque>

using namespace std;

int n, m;
char ch;
stack<int> s;
deque<char> d;

int main(){

    cin >> n;
    cin.ignore();
    for(int i=1; i<=n; i++){
        cin >> m;
        if(m == 1){
            cin >> ch;
            d.push_back(ch);
            s.push(1);
        }else if(m == 2){
            cin >> ch;
            d.push_front(ch);
            s.push(2);
        }else{
            if(!d.empty()){
                if(s.top() == 1){
                    d.pop_back();
                }else{
                    d.pop_front();
                }
                s.pop();
            }
        }
    }
    
    if(!d.empty()){
        for(auto elem : d){
            cout <<elem;
        }
    }else{
        cout << 0;
    }

    return 0;
}
