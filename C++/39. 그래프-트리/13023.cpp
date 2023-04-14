/*
 * Author : JC
 * https://www.acmicpc.net/problem/13023
*/

#include <iostream>
#include <vector>
#include <stdio.h>
#include <string.h>

using namespace std;

vector<int> v[2001];
int cnt;
bool gone[2001],c;

void DFS(int x, int y){ 
    if(y==5){
        cout << 1;
        exit(0);
    }
    for(int i=0; i<v[x].size(); i++){ 
        if(!gone[v[x][i]]){
            gone[v[x][i]]=1;
            DFS(v[x][i], y+1);
            
        }
    }
    gone[x]=0;
}

int main(){
    int n, m;
    cin >> n >> m ;
    for(int i=0; i<m; i++){
        int a, b;
        scanf("%d %d",&a,&b);
        v[a].push_back(b);
        v[b].push_back(a);
    }

    for(int i=0; i<n; i++){
        cnt=1;
        gone[i]=1;
        DFS(i, 1);
        memset(gone, 0, sizeof(gone));
    }

    cout << "0\n";

    return 0;
}