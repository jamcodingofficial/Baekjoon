/*
 * Author : JC
 * https://www.acmicpc.net/problem/1026
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, m;
vector<int> v1, v2;

int main(){

    cin >> n;
    for(int i=0; i<n; i++){
        cin >> m;
        v1.push_back(m);
    }
    for(int i=0; i<n; i++){
        cin >> m;
        v2.push_back(m);
    }
    
    sort(v1.begin(),v1.end());
    sort(v2.rbegin(), v2.rend());
    
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += v1[i] * v2[i];
    }
    cout << sum;
    cout << "hello world!!";
 
    return 0;
}