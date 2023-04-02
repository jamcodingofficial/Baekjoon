/*
 * Author : JC
 * https://www.acmicpc.net/problem/2346
*/

#include <iostream>
#include <deque>

using namespace std;

int n, m;

deque<int> d1;
deque<int> d2;

int main(){

    cin >> n;
    
    for(int i=1; i<=n; i++){
        cin >> m;
        d1.push_back(m);
        d2.push_back(i);
    }
    
    cout << d2[0] << " ";
    int move = d1.front();
    d1.pop_front();
    d2.pop_front();

    while(!d1.empty()){
        if(move > 0){
            for(int i=0; i<move-1; i++){
                d1.push_back(d1.front());
                d2.push_back(d2.front());
                d1.pop_front();
                d2.pop_front();
            }
            cout << d2.front() << " ";
            d2.pop_front();
            move = d1.front();
            d1.pop_front();
        }else{
            for(int i=0; i<abs(move+1); i++){
                d1.push_front(d1.back());
                d2.push_front(d2.back());
                d1.pop_back();
                d2.pop_back();
            }
            cout << d2.back() << " ";
            d2.pop_back();
            move = d1.back();
            d1.pop_back();
        }
    }
    
    return 0;
}