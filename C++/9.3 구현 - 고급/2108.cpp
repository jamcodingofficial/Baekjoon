/*
 * Author : JC
 * https://www.acmicpc.net/problem/2108
*/

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int arr[500000];
int res[8001];

int main() {
    int n;
    cin >> n;
    int sum = 0;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        if(arr[i] >= 0){
            res[arr[i]]++;
        }else{
            res[abs(arr[i]) + 4000]++;
        }
        sum += arr[i];
    }
    
    sort(arr, arr+n);
        
    
    if(-0.5<= (double)sum/n && (double)sum/n < 0.0){
        printf("%.0lf\n", -(double)sum/n);
    }else{
        printf("%.0lf\n", (double)sum/n);
    }
    cout << arr[n/2] << "\n";
    
    int mode = 0;
    int num = 0;
    for(int i=0; i<=8000; i++){
        if(mode < res[i]){
            mode = res[i];
            if(i <= 4000){
                num = i;
            }else{
                num = (i - 4000) * -1;
            }
        }
    }
    vector<int> v;
    
    for(int i=0; i<=8000; i++){
        if(mode == res[i]){
            if(i <= 4000){
                v.push_back(i);
            }else{
                v.push_back((i-4000) * -1);
            }
        }
    }
    
    if(v.size() >= 2){
        sort(v.begin(), v.end());
        cout << v[1] << "\n";
    }else{
        cout << v[0] << "\n";
    }
    
    cout << arr[n-1] - arr[0] << "\n";

    return 0;   
}