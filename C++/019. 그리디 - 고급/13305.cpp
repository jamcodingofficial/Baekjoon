/*
 * Author : JC
 * https://www.acmicpc.net/problem/13305
*/

#include <iostream>

using namespace std;

int n;
int dist[100000], price[100000];

int main(){

    cin >> n;
    for(int i=0; i<n-1; i++){
        cin >> dist[i];
    }
    
    for(int i=0; i<n; i++){
        cin >> price[i];
    }
    
    long long res = 0;
    long long tmp = 1e9;
    
    for(int i=0; i<n; i++){
        if(tmp > price[i]){
            tmp = price[i];
        }
        res = res + tmp * dist[i];
    }

    cout << res;
    
    return 0;
}