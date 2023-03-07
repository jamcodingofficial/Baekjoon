/*
 * Author : JC
 * https://www.acmicpc.net/problem/23559
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, x, a, b;
int sum;
vector<int> v;

int main(){

    cin >> n >> x;
    for(int i=0; i<n; i++){
        cin >> a >> b;
        v.push_back(a-b);
        sum += b;
    }
    x = x - (1000 * n);
    sort(v.rbegin(), v.rend());
    
    for(int i=0; i<n; i++){
        if(x >= 4000 && v[i] > 0){
            x -= 4000;
            sum += v[i];
        }
    }

    cout << sum;
    
    return 0;
}