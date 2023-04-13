/*
 * Author : JC
 * https://www.acmicpc.net/problem/1991
*/

#include <iostream>
#include <vector>

using namespace std;

vector<pair<int, bool>> vp[26];

void preOrder(int node){
     cout << (char)(node+'A');
    for(int i=0; i<vp[node].size(); i++){
        preOrder(vp[node][i].first);
    }
}

void inOrder(int node){ 
    if(vp[node].size() != 0 && vp[node][0].second){
        inOrder(vp[node][0].first);
    }
    cout << (char)(node+'A');
    
    if(vp[node].size() != 0 && !vp[node][0].second){
        inOrder(vp[node][0].first);
    }else if(vp[node].size() == 2){
        inOrder(vp[node][1].first);
    }
    
}

void postOrder(int node){
    for(int i=0; i<vp[node].size(); i++){
        postOrder(vp[node][i].first);
    }
    cout << (char)(node+'A');
}

int main(){
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        char a, b, c;
        cin >> a >> b >> c;
        if(b != '.'){
            vp[a-'A'].push_back({b-'A', 1});
        }
        if(c != '.'){
            vp[a-'A'].push_back({c-'A', 0});
        }
    }

    preOrder(0);
    cout << "\n";
    inOrder(0);
    cout << "\n";
    postOrder(0);
    cout << "\n";

    return 0;
}