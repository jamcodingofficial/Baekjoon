/*
 * Author : JC
 * https://www.acmicpc.net/problem/17298
*/

#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int n, a;
vector<int> v;
stack<int> s;

int main(){
        
    cin >> n;
    
    for(int i=0; i<n; i++){
        cin >> a;
        v.push_back(a);
    }
    
    vector<int> res(n, -1);
    
    for(int i=0; i<n; i++){
        while(!s.empty() && v[s.top()] < v[i]){
            res[s.top()] = v[i];
            s.pop();
        }
        s.push(i);
    }
    
    for(int i=0; i<res.size(); i++){
        cout << res[i] << " ";
    }
    
    return 0;
}