/*
 * Author : JC
 * https://www.acmicpc.net/problem/22993
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n;
vector<long long> v;

int main(){

    cin >> n;
    
    for(int i=0; i<n; i++){
        int t;
        cin >> t;
        v.push_back(t);
    }
    
    sort(v.begin()+1, v.end());
    
    for(int i=1; i<n; i++){
        if(v[0] > v[i]){
            v[0] += v[i];
        }else{
            cout << "No";
            return 0;
        }
    }
    
    cout << "Yes";
    
    return 0;
}