/*
 * Author : JC
 * https://www.acmicpc.net/problem/4485
*/

#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;
typedef pair<int, int> pii;

int a[125][125];
int b[125][125];
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
int t;

void bfs(){
    queue<pii> qp;
    qp.push({0, 0});
    while(!qp.empty()){
        pii p = qp.front();
        qp.pop();
        for(int i=0; i<4; i++){
            int nx = p.first + dx[i];
            int ny = p.second + dy[i];
            if(0<=nx && nx<t && 0<=ny && ny<t){
                if(b[p.first][p.second] + a[nx][ny] < b[nx][ny]){
                    b[nx][ny] = b[p.first][p.second] + a[nx][ny];
                    qp.push({nx, ny});
                }
            }
        }
    }
}
int main(){
    
    int n = 1;
    while(1){
        cin >> t;
        if(t == 0){
            break;
        }
        for(int i=0; i<t; i++){
            for(int j=0; j<t; j++){
                cin >> a[i][j];
            }
        }
        fill(&b[0][0], &b[124][125], 1500);
        b[0][0] = a[0][0];
        bfs();
        cout << "Problem " << n++ << ": " << b[t-1][t-1] << "\n";
    }
    
    return 0;
}