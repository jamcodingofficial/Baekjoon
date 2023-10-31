/*
 * Author : JC
 * https://www.acmicpc.net/problem/28218
*/

#include <iostream>

using namespace std;

char arr[301][301];
int ans[301][301];
int n, m, K;

int main(){
    
    cin >> n >> m >> K;
    for(int i=1; i<=n; i++){
        for(int j = 1; j <= m; j++){
            cin >> arr[i][j];
        }
    }

    
    for(int i=n; i>=1; i--){
        for(int j=m; j>=1; j--){
            if(arr[i][j] != '#' && !ans[i][j]){
                ans[i - 1][j] = 1;
                ans[i][j - 1] = 1;
                for(int k = 1; k <= K; k++){
                    if(i - k < 1 || j - k < 1){
                        break;
                    }
                    ans[i - k][j - k] = 1;
                }
            }
        }
    }

    int q;
    cin >> q;
    for(int i=0; i<q; i++){
        int x, y;
        cin >> x >> y;
        if(ans[x][y]){
            cout << "First\n";
        }else{
            cout << "Second\n";
        }
    }

    return 0;
}