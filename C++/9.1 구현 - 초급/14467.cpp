/*
 * Author : JC
 * https://www.acmicpc.net/problem/14467
*/

#include <iostream>
#include <string.h>

using namespace std;

int visited[101];
int n;

int main(){
    
    cin >> n;
    int cnt = 0;
    memset(visited, -1, sizeof(visited));
    for(int i=0; i<n; i++){
        int a, b;
        cin >> a >> b; 
        if(visited[a] != -1 && visited[a] != b){
            cnt++;
        }
        visited[a] = b;
    }
    cout << cnt;

    return 0;
}