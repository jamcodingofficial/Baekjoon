/*
 * Author : JC
 * https://www.acmicpc.net/problem/3055
*/

#include <iostream>
#include <queue>

using namespace std;
typedef pair<int,int> pii;

char arr[50][51];
bool visited[50][50];
int path[50][50];
queue<pii> hedgehog, wave;
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};
int r, c;

int bfs(){
    while(!hedgehog.empty()){
        int wave_size = wave.size();
        visited[wave.front().first][wave.front().second];
        for(int i=0; i<wave_size; i++){
            int x = wave.front().first;
            int y = wave.front().second;
            wave.pop();
            for(int j=0; j<4; j++){
                int nx = x + dx[j];
                int ny = y + dy[j];
                if(0<=nx && nx<r && 0<=ny && ny<c){
                    if(arr[nx][ny] == '.' && !visited[nx][ny]){
                        wave.push({nx, ny});
                        visited[nx][ny] = true;
                        arr[nx][ny] = '*';
                    }
                }
            }
        }
        
        int hedgehog_size = hedgehog.size();
        visited[hedgehog.front().first][hedgehog.front().second];
        for(int i=0; i<hedgehog_size; i++){
            int x = hedgehog.front().first;
            int y = hedgehog.front().second;
            hedgehog.pop();
            for(int j=0; j<4; j++){
                int nx = x + dx[j];
                int ny = y + dy[j];
                if(0<=nx && nx<r && 0<=ny && ny<c){
                    if(arr[nx][ny] == '.'){
                        hedgehog.push({nx, ny});
                        visited[nx][ny] = true;
                        arr[nx][ny] = 'S';
                        path[nx][ny] = path[x][y] + 1;
                    }else if(arr[nx][ny] == 'D'){
                        return path[x][y] + 1;
                    }
                }
            }
        }
    }
    return 0;
}

int main(){
    
    cin >> r >> c;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin >> arr[i][j];
            if(arr[i][j] == 'S'){
                hedgehog.push({i, j});
            }else if(arr[i][j] == '*'){
                wave.push({i, j});
            }
        }
    }
    
    int ans = bfs();
    if(ans){
        cout << ans;
    }else{
        cout << "KAKTUS";
    }
    
    return 0;
}