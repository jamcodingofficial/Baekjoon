/*
 * Author : JC
 * https://www.acmicpc.net/problem/7568
*/

#include <iostream>

using namespace std;

int height[50], weight[50];

int main() {
    int n;
    cin >> n;
    
    for(int i=0; i<n; i++){
        cin >> height[i] >> weight[i];
    }

    for(int i=0; i<n; i++){
        int cnt = 0;
        for(int j=0; j<n; j++){
            if(height[i] < height[j] && weight[i] < weight[j]){
                cnt++;
            }
        }
        cout << cnt + 1 << " ";
    }
    
    return 0;
}