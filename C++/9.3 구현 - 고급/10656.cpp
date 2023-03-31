/*
 * Author : JC
 * https://www.acmicpc.net/problem/10656
*/

#include <iostream>
#include <vector>

using namespace std;

typedef pair<int,int> pii;
char map[50][51];
int cnt;
int n, m;
vector<pii> vp;

int row(int x, int y){
    if(map[x][y-1] == '#' || y-1 == 0){
        if(map[x][y+1] == '.' && map[x][y+2] == '.'){
            return 1;
        }
    }
    return 0;
}

int column(int x, int y){
    if(map[x-1][y] == '#' || x-1 == 0){
        if(map[x+1][y] == '.' && map[x+2][y] == '.'){
            return 1;
        }
    }
    return 0;
}

int main(){
    
    cin >> n >> m;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cin >> map[i][j];
        }
    }
    
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if(map[i][j] == '.'){
                if(row(i, j)){
                    cnt++;
                    vp.push_back({i, j});
                    continue;
                }
                if(column(i, j)){
                    cnt++;
                    vp.push_back({i, j});
                }
            }
        }
    }
    
    cout << cnt << "\n";
    for(int i=0; i<cnt; i++){
        cout << vp[i].first << " " << vp[i].second << "\n";
    }
    
    return 0;
}