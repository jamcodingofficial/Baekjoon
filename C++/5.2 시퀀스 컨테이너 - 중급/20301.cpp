/*
 * Author : JC
 * https://www.acmicpc.net/problem/20301
*/

#include <iostream>
#include <deque>

using namespace std;

int n, m, k;
int cnt;
bool check;
deque<int> d;

int main(){
            
    cin >> n >> m >> k;
    
    for(int i=1; i<=n; i++){
        d.push_back(i);
    }
    
    while(!d.empty()){
        if(!check){
            for(int i=0; i<m-1; i++){
                d.push_back(d.front());
                d.pop_front();
            }
            cout << d.front() << "\n";
            d.pop_front();
        }else{
            for(int i=0; i<m-1; i++){
                d.push_front(d.back());
                d.pop_back();
            }
            cout << d.back() << "\n";
            d.pop_back();
        }
        cnt++;
        if(cnt == k){
            check = !check;
            cnt = 0;
        }
    }
    
    return 0;
}