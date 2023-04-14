/*
 * Author : JC
 * https://www.acmicpc.net/problem/13335
*/

#include <iostream>
#include <queue>

using namespace std;

int n, w, l;
int arr[1001];
int ans;
queue<int> q;

int main(){
    
    cin >> n >> w >> l;
    
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    
    int sum = 0;
    for(int i=0; i<n; i++){
        while(1){
            if(q.size() == w){
                sum -= q.front();
                q.pop();
            }
            if(sum + arr[i] <= l){
                break;
            }
            q.push(0);
            ans ++;
        }
        q.push(arr[i]);
        sum += arr[i];
        ans ++;
    }
    
    ans += w;
    cout << ans;
    return 0;
}