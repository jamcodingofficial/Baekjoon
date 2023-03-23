/*
 * Author : JC
 * https://www.acmicpc.net/problem/2605
*/

#include <iostream>

using namespace std;

int a[101];
int n;

int main(){
    
    cin >> n;
    for(int i=1; i<=n; i++){
        a[i] = i;
    }
    
    for(int i=1; i<=n; i++){
        int m;
        cin >> m;
        if(m == 0){
            continue;
        }
        for(int j=1; j<=m; j++){
            int tmp = a[i-j];
            a[i-j] = a[i-j+1];
            a[i-j+1] = tmp;
        }
    }
    
    for(int x=1; x<=n; x++){
        cout << a[x] << " ";
    }
    
    return 0;
}