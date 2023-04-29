/*
 * Author : JC
 * https://www.acmicpc.net/problem/3085
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, ans;
vector<pair<int,int>> vp;

int main(){
    
    cin >> n;
    for(int i=0; i<n; i++){
        int a, b;
        cin >> a >> b;
        vp.push_back({a, b});
    }
    sort(vp.begin(), vp.end());
    
    for(int i=0; i<n; i++){
        int color = vp[i].second;
        int l = 100000, r = 100000;
        // color와 같은 색깔의 점이 왼쪽에 있는지 체크
        for(int j=i-1; j>=0; j--){ 
            if(vp[j].second == color){
                l = vp[i].first-vp[j].first;
                break;
            }
        }
        // color와 같은 색깔의 점이 오른쪽에 있는지 체크
        for(int j=i+1; j<n; j++){ 
            if(vp[j].second == color){
                r = vp[j].first-vp[i].first;
                break;
            }
        }
        ans += min(l, r); // 왼쪽, 오른쪽 거리 중에서 가까운 거리를 누적
    }
    cout << ans;
    
    return 0;
}
