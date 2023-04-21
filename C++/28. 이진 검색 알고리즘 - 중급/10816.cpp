/*
 * Author : JC
 * https://www.acmicpc.net/problem/10816
*/

// 해결 방법1
#include <iostream>
#include <algorithm>

using namespace std;

int A[500001];
int B[500001];

int up(int len, int target){
    int low = 1;
    int high = len;
    int mid;
    while(low <= high){
        mid = (low + high) / 2;
        if(A[mid] <= target){
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }
    return low;
}

int down(int len, int target){
    int low = 1;
    int high = len;
    int mid;
    while(low <= high){
        mid = (low + high) / 2;
        if(A[mid] < target){
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }
    return low;
}

int main(){
    int n;
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> A[i];
    }
    sort(A+1, A+n+1);
    int m;
    cin >> m;
    for(int i=1; i<=m; i++){
        cin >> B[i];
    }
    
    for(int i=1; i<=m; i++){
        cout << up(n, B[i]) - down(n, B[i]) << " ";
    }
    
    return 0;
}

//해결 방법2
#include <iostream>
#include <algorithm>

using namespace std;

int A[500001];
int B[500001];

int main(){
    int n;
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> A[i];
    }
    sort(A+1, A+n+1);
    int m;
    cin >> m;
    for(int i=1; i<=m; i++){
        cin >> B[i];
    }
    for(int i=1; i<=m; i++){
        cout << upper_bound(A+1, A+n+1, B[i]) - lower_bound(A+1, A+n+1, B[i]) << " ";
    }
    
    return 0;
}