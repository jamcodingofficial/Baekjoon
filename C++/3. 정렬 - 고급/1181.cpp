/*
 * Author : JC
 * https://www.acmicpc.net/problem/1181
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n;
string s;
vector<string> v;

bool cmp(string x, string y){
    if(x.length() == y.length()){
        return x < y;
    }else{
        return x.length() < y.length();
    }
}

int main(){
    
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> s;
        v.push_back(s);
    }

    sort(v.begin(), v.end(), cmp);

    string tmp;
    for(int i=0; i<n; i++){
        if(tmp == v[i]){
            continue;
        }
        cout << v[i] << "\n";
        tmp = v[i];
    }
    
    return 0;
}
