/*
 * Author : JC
 * https://www.acmicpc.net/problem/1764
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, m;
vector <string> v, r;

int main(){
    
    cin >> n >> m;

    for(int i=0; i<n+m; i++){
        string s;
        cin >> s;
        v.push_back(s);
    }
    int cnt = 0;
    sort(v.begin(), v.end());
    for(int i=0; i<n+m-1; i++){
        if(v[i] == v[i+1]){
            cnt++;
            r.push_back(v[i]);
        }
    }

    cout << cnt << "\n";
    for(auto elem : r){
        cout << elem << "\n";
    }
    return 0;
}

