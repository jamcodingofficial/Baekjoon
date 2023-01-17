/*
 * Author : JC
 * https://www.acmicpc.net/problem/1021
*/

#include <iostream>
#include <deque>

using namespace std;

int n, m;
int arr[50];
deque<int> d;
int cnt;

int main(){
    
    cin >> n >> m;
    for(int i=1; i<=n; i++){
        d.push_back(i);
    }
    
    for(int i=0; i<m; i++){
        cin >> arr[i];
    }
    
    for(int i=0; i<m; i++){
        int size = d.size();
        int tmp = 0;
        for(int j=0; j<size; j++){
            if(arr[i] == d[j]){
                tmp = j;
                break;
            }
        }
        if(tmp <= size / 2){
            cnt += tmp;
            for(int j=0; j<tmp; j++){
                d.push_back(d.front());
                d.pop_front();
            }
        }else{
            cnt += size-tmp;
            for(int j=0; j<size-tmp; j++){
                d.push_front(d.back());
                d.pop_back();
            }
        }
        d.pop_front();
    }
    
    cout << cnt;
    
    return 0;
}