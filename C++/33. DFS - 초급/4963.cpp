#include <iostream>
#include <string.h>

using namespace std;

int map[50][50];
bool visited[50][50];
int w, h;
int dx[] = {-1, -1, 0, 1, 1, 1, 0, -1};
int dy[] = {0, 1, 1, 1, 0, -1, -1, -1};

void dfs(int x, int y){ 
    visited[x][y] = true;
    for(int i=0; i<8; i++){
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(0<=nx && nx<h && 0<=ny && ny<w){
            if(map[nx][ny] == 1 && visited[nx][ny] == false){
                dfs(nx, ny);
            }
        }
    }
}

int main(){
    while(1){
        cin >> w >> h;
        if(w == 0 && h == 0){
            break;
        }
        for(int i=0; i<h; i++){
            for(int j=0; j<w; j++){
                cin >> map[i][j];
            }
        }
        int cnt = 0;
        for(int i=0; i<h; i++){
            for(int j=0; j<w; j++){
                if(map[i][j] == 1 && visited[i][j] == false){
                    dfs(i, j);
                    cnt++;
                }
            }
        }
        cout << cnt << "\n";
        memset(visited, 0, sizeof(visited));
        memset(map, 0, sizeof(map));
    }

    return 0;
}