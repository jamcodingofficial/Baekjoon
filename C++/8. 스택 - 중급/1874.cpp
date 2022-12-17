/*
 * Author : JC
 * https://www.acmicpc.net/problem/1874
*/

#include <iostream>
#include <stack>

using namespace std;

int n, idx;
int arr[100000];
char res[100001];

int main(){

    cin >> n;

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    
    stack<int> s;
    
    for(int i=1; i<=arr[0]; i++){
        s.push(i);
        res[idx++] = '+';
    }
    
    int cnt = arr[0] + 1;
    res[idx++] = '-';
    int tmp = s.top();
    s.pop();

    for(int i=1; i<n; i++){
        if(tmp > arr[i]){
            if(s.top() != arr[i]){
                cout << "NO";
                return 0;
            }
            for(int j=0; j<tmp-arr[i]; j++){
                tmp = s.top();
                s.pop();
                res[idx++] = '-';
            }
        }else{
            int j;
            for(j=cnt; j<=arr[i]; j++){
                s.push(j);
                res[idx++] = '+';
            }
            cnt = j;
            res[idx++] = '-';
            tmp = s.top();
            s.pop();
        }
    }

    for(int i=0; i<idx; i++){
        cout << res[i] << "\n";
    }
    
    return 0;
}