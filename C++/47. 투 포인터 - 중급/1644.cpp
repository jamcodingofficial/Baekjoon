/*
 * Author : JC
 * https://www.acmicpc.net/problem/1644
*/

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n;
bool check[4000001];

vector<int> v;

int main() {
    fill(check, check+4000001, true);
    check[1] = false;
    for(int i=2; i<=4000000; i++){
        if(check[i] == true){
            for(int j=i+i; j<=4000000; j+=i){
                check[j] = false;
            }
        }
    }
    
    cin >> n;
    for(int i=1; i<=n; i++){
        if(check[i] == true){
            v.push_back(i);
        }
    }
    if(v.empty()){
        cout << 0;
        return 0;
    }
    
    int l = 0, r = 0;
    int sum = 0, cnt = 0;
    
    while(r <= v.size()){
        if(sum < n){
            sum += v[r];
            r++;
        }else{
            if(sum == n){
                cnt++;
            }
            sum -= v[l];
            l++;
        }
    }

    cout << cnt;

    return 0;
}