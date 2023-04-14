/*
 * Author : JC
 * https://www.acmicpc.net/problem/1946
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int t, n, res = 1;
vector<pair<int,int>> vp;

int main(){

    cin >> t;
    for(int i=0; i<t; i++){
        cin >> n;
        for(int j=0; j<n; j++){
            int s1, s2;
            cin >> s1 >> s2;
            vp.push_back({s1, s2});
        }
        
        sort(vp.begin(), vp.end());
        
        int tmp = vp[0].second;
        for(int j=1; j<n; j++){
            if(tmp > vp[j].second){
                tmp = vp[j].second;
                res++;
            }
        }
        cout << res << "\n";
        res = 1;
        vp.clear();
    }

    return 0;
}