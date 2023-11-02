/*
 * Author : JC
 * https://www.acmicpc.net/problem/14888
*/

#include <iostream>

using namespace std;

int arr[11], operators[4];
int n;
int max_num = -1e9, min_num = 1e9;

void check(int result, int idx){
    if(idx == n){
        max_num = max(max_num, result);
        min_num = min(min_num, result);
    }else{
        for(int i=0; i<4; i++){
            if(operators[i] != 0){
                operators[i]--;
                if(i == 0){
                    check(result + arr[idx], idx+1);
                }else if(i == 1){
                    check(result - arr[idx], idx+1);
                }else if(i == 2){
                    check(result * arr[idx], idx+1);
                }else{
                    check(result / arr[idx], idx+1);
                }
                operators[i]++;
            }
        }
    }
}

int main(){
    
    cin >> n;
    
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    
    for(int i=0; i<4; i++){
        cin >> operators[i];
    }
    
    check(arr[0], 1);
    
    cout << max_num << "\n" << min_num;
    
    return 0;
}