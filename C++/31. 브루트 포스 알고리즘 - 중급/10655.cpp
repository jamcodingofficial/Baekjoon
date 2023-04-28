/*
 * Author : JC
 * https://www.acmicpc.net/problem/10655
*/

#include <iostream>
#include <vector>

using namespace std;
typedef pair<int,int> pii;

vector<pii> vp;

int dist(int x1, int x2, int y1, int y2){
    return abs(x1-x2) + abs(y1-y2);
}

int main() {
    int n, nx, ny;
    cin >> n >> nx >> ny;
    vp.push_back({nx, ny});
    int sum = 0;
    for(int i=0; i<n-1; i++){
        int x, y;
        cin >> x >> y;
        vp.push_back({x, y});
        sum += dist(nx, x, ny, y);
        nx = x;
        ny = y;
    }
    
    pii a, b, c;
    int ans = 0;
    for(int i=1; i<n-1; i++){
        a = vp[i-1];
        b = vp[i];
        c = vp[i+1];
        int r1 = dist(a.first, b.first, a.second, b.second) + dist(b.first, c.first, b.second, c.second);
        int r2 = dist(a.first, c.first, a.second, c.second);
        int r3 = r1 - r2;
        ans = max(ans, r3);
    }
    cout << sum - ans;

    return 0;
}