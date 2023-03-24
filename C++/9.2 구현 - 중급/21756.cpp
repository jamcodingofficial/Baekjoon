/*
 * Author : JC
 * https://www.acmicpc.net/problem/21756
*/

#include <iostream>
#include <vector>

using namespace std;

int n;
vector<int> v;

int main() {
    
    cin >> n;
    
    for(int i=1; i<=n; i++){
        v.push_back(i);
    }
    
    while(v.size() != 1){
        for(int i=0; i<v.size(); i++){
            v.erase(v.begin()+i); 
        }
    }

    cout << v.front();

    return 0;
}