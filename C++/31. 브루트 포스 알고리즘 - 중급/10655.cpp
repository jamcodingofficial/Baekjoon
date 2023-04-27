/*
 * Author : JC
 * https://www.acmicpc.net/problem/10655
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<pair<int, int>> vp;
int n, sx, sy, x, y;
int sum;

int dist(int sx, int x, int sy, int y){
    return abs(sx - x) + abs(sy - y);
}

int main() {
    
    cin >> n >> sx >> sy;
    vp.push_back({sx, sy});
    
    for(int i=0; i<n-1; i++){
        cin >> x >> y;
        vp.push_back({x, y});
        sum += dist(sx, x, sy, y);
        sx = x;
        sy = y;
    }
    pair<int, int> a, b, c;
    int ans = 0;
    for(int i=1; i<n-1; i++){
        a = vp[i-1];
        b = vp[i];
        c = vp[i+1];
        int d = dist(a.first, b.first, a.second, b.second) + dist(b.first, c.first, b.second, c.second);
        int e = dist(a.first, c.first, a.second, c.second);
        int f = d - e;
        ans = max(ans, f);
    }
    cout << sum - ans;
    
    return 0;
}
