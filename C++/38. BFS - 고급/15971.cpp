/*
 * Author : JC
 * https://www.acmicpc.net/problem/15971
*/

#include <iostream>
#include <vector>
 
using namespace std;
 
vector<pair<int,int>> v[100001];
bool check[100001];
int num1[100001], num2[100001];
int n, fir, sec;
 
void bfs(int start, int loc, int m){
    check[start] = true;
    num1[start] = loc;
    num2[start] = m;
    for(int i=0; i<v[start].size(); i++){
        if(check[v[start][i].first] == false){
            bfs(v[start][i].first, loc + v[start][i].second, max(m, v[start][i].second));
        }
    }
}

int main() {
    cin >> n >> fir >> sec;
    int x,y,z;
    for(int i=1;i<n;i++){
        cin >> x >> y >> z;
        v[x].push_back({y,z});
        v[y].push_back({x,z});
    }
    
    bfs(fir, 0, 0);
    cout << num1[sec] - num2[sec];
    
    return 0;
}