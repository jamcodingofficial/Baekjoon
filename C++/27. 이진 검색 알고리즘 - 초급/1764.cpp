/*
 * Author : JC
 * https://www.acmicpc.net/problem/1764
*/

/*
 * Author : JC
 * https://www.acmicpc.net/problem/1764
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, m;
string A[500000], B[500000];

int binarySearch(int len, string target){
    int low = 0;
    int high = len-1;
    int mid;
    while(low <= high){
        mid = (low + high) / 2;
        if(A[mid] == target){
            return mid;
        }else if(A[mid] < target){
            low = mid+1;
        }else{
            high = mid-1;
        }
    }
    return -1;
}

int main(){
    
    cin >> n >> m;
    for(int i=0; i<n; i++){
        cin >> A[i];
    }
    for(int i=0; i<m; i++){
        cin >> B[i];
    }
    sort(A, A+n);
    vector<string> v;
    for(int i=0; i<m; i++){
        if(binarySearch(n, B[i]) != -1){
            v.push_back(B[i]);
        }
    }

    sort(v.begin(), v.end());
    cout << v.size() << "\n";
    for(int i=0; i<v.size(); i++){
        cout << v[i] << "\n";
    }
    
    return 0;
}