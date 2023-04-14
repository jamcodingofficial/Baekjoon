/*
 * Author : JC
 * https://www.acmicpc.net/problem/14469
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
        vp.push_back({s, e});
    }
    
    sort(vp.begin(), vp.end());
    
    int sum = 0;
    sum += vp[0].first + vp[0].second;
    
    for(int i=1; i<n; i++){
        if(sum < vp[i].first){
            sum = vp[i].first + vp[i].second;
        }else{
            sum += vp[i].second;
        }
    }
    
    cout << sum;
    
    return 0;
}