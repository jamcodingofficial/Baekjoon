/*
 * Author : JC
 * https://www.acmicpc.net/problem/2573
*/

#include <iostream>
#include <string.h>

using namespace std;

int arr[300][300];
bool visited[300][300];
int n, m, cnt, year;
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};

void melt(){
    for(int i=1; i<n-1; i++){
        for(int j=1; j<m-1; j++){
            if(arr[i][j] != 0){
                for(int k=0; k<4; k++){
                    int nx = i + dx[k];
                    int ny = j + dy[k];
                    if(arr[nx][ny] == 0 && !visited[nx][ny]){
                        arr[i][j]--;
                        if(arr[i][j] <= 0){
                            arr[i][j] = 0;
                            cnt--;
                            break;
                        }
                    }
                }
                visited[i][j] = true;
            }
        }
    }
}

void dfs(int x, int y){
    visited[x][y] = true;
    for(int i=0; i<4; i++){
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(arr[nx][ny] != 0 && !visited[nx][ny]){
            dfs(nx, ny);
        }
    }
}

int main(){
    
    cin >> n >> m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> arr[i][j];
            if(arr[i][j] != 0) cnt++;
        }
    }
    
    while(1){
        melt();
        year++;
        memset(visited, false, sizeof(visited));
        int dfscnt = 0;
        for(int i=1; i<n-1; i++){
            for(int j=1; j<m-1; j++){
                if(arr[i][j] != 0 && !visited[i][j]){
                    dfs(i, j);
                    dfscnt++;
                }
            }
        }
        memset(visited, false, sizeof(visited));
        if(cnt == 0){
            cout << 0;
            return 0;
        }
        if(dfscnt >= 2){
            cout << year;
            break;
        }
    }

    return 0;
}
