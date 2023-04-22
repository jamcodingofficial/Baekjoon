/*
 * Author : JC
 * https://www.acmicpc.net/problem/1920
*/

#include <iostream>
#include <algorithm>

using namespace std;

int n, m;

int main() {
        
        cin >> n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        sort(arr, arr+n);
        cin >> m;
        int brr[m];
        for(int i=0; i<m; i++){
            cin >> brr[i];
        }

        for(int i=0; i<m; i++){
            if(binary_search(arr, arr+n, brr[i])>=1){
                cout << 1 << "\n";
            }
            else{
                cout << 0 << "\n";
            }
        }

        return 0;
}