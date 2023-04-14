/*
 * Author : JC
 * https://www.acmicpc.net/problem/1931
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, s, e;
vector<pair<int,int>> vp;

int main(){
    
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> s >> e;
        vp.push_back({e, s});
    }
    sort(vp.begin(), vp.end());
    
    int res = vp[0].first;
    int cnt = 1;
    for(int i=1; i<n; i++){ // i : 1
        if(res <= vp[i].second){
            res = vp[i].first;
            cnt++;
        }
    }
    cout << cnt++;
    
    return 0;
}