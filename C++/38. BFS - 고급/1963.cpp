/*
 * Author : JC
 * https://www.acmicpc.net/problem/1963
*/

#include <iostream>
#include <string.h>
#include <queue>

using namespace std;

bool check[10000];
int ans[10000];

void eratosthenes(){
    memset(check, true, sizeof(check));
    check[1] = false;
    for(int i=2; i<=9999; i++){
        if(check[i]){
            for(int j=i*i; j<=9999; j+=i){
                check[j] = false;
            }
        }
    }
}

void bfs(int x){
    queue<int> q;
    q.push(x);
    ans[x] = 0;
    while(!q.empty()){
        int n = q.front();
        q.pop();
        for(int i=0; i<4; i++){
            string p = to_string(n);
            for(int j=0; j<=9; j++){
                p[i] = j + '0';
                int num = stoi(p);
                if(num >= 1000 && check[num] && ans[num] == -1){
                    q.push(num);
                    ans[num] = ans[n] + 1;
                }
            }
        }
    }
}

int main(){
    
    eratosthenes();    
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        memset(ans, -1, sizeof(ans));
        int x, y;
        cin >> x >> y;
        bfs(x);
        if(ans[y] != -1){
            cout << ans[y] << "\n";
        }else{
            cout << "Impossible\n";
        }
    }
    
    return 0;
}