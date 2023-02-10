/*
 * Author : JC
 * https://www.acmicpc.net/problem/11003
*/

#include <iostream>
#include <deque>

using namespace std;

int n, l, k;
deque<pair<int, int>> dp;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    cin >> n >> l;
    for(int i=0; i<n; i++){
        cin >> k;
        if(!dp.empty() && dp.front().second < i-l+1){
            dp.pop_front();
        }
        
        while(!dp.empty() && dp.back().first > k){
            dp.pop_back();
        }
        
        dp.push_back({k, i});
        
        cout << dp.front().first << " ";
    }
    
    return 0;
}