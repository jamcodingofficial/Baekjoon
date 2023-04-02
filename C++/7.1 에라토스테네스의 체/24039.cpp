/*
 * Author : JC
 * https://www.acmicpc.net/problem/24039
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool check[10001];
int n;

int main(){

    cin >> n;
    fill(check, check+10001, true);
    check[1] = false;
    for(int i=2; i<=10000; i++){
        for(int j=i+i; j<=10000; j+=i){
            check[j] = false;
        }
    }
    
    vector<int> v;
    for(int i=2; i<=10000; i++){
        if(check[i] == true){
            v.push_back(i);
        }
    }
    
    for(int i=0; i<v.size()-1; i++){ 
        if(v[i] * v[i+1] > n){ 
            cout << v[i] * v[i+1];
            break;
        }
    }
}