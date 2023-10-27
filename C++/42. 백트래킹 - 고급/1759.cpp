/*
 * Author : JC
 * https://www.acmicpc.net/problem/1759
*/

#include <iostream>
#include <algorithm>

using namespace std;

int l, c;
char ch[16], arr[15];
bool visited[15];


void dfs(int x, int y){
    if(x == l){
        int cnt = 0;
        for(int i=0; i<l; i++){
            if(arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u'){
                cnt++;
            }
        }
        if(cnt && (l - cnt >= 2)){
            for(int i=0; i<l; i++){
                cout << arr[i];
            }
            cout << "\n";
        }
    }else{
        for(int i=y; i<c; i++){
            if(!visited[i]){
                visited[i] = true;
                arr[x] = ch[i];
                dfs(x+1, i+1);
                visited[i] = false;
            }
        }
    }
}

int main(){
    
    cin >> l >> c;
    for(int i=0; i<c; i++){
        cin >> ch[i];
    }
    
    sort(ch, ch+c);
    
    dfs(0, 0);

    return 0;
}