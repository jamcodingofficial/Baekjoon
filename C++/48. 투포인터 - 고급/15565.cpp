/*
 * Author : JC
 * https://www.acmicpc.net/problem/1644
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int arr[1000000];

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n, k;
    cin >> n >> k;
    vector<int> v;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        if(arr[i] == 1){
            v.push_back(i);
        }
    } 
    
    int left = 0;
    int right = k-1;
    int res = n;
    
    if(v.size() < k){
        cout << -1;
    }else{
        while(right <v.size()){
            int tmp = v[right] - v[left] + 1;
            if(res > tmp) res = tmp;
            right++;
            left++;
        }
        cout << res;
    }
    
    return 0;
}