#include <iostream>
#include <queue>
#include <stack>

using namespace std;

int path[100001];
bool visited[100001];

int main(){
    int n, k;
    cin >> n >> k;
    queue<pair<int,int>> qp;
    qp.push({n, 0});
    
    while(!qp.empty()){
        int loc = qp.front().first;
        int cnt = qp.front().second;
        if(loc == k){
            break;
        }
        qp.pop();
        visited[loc] = true;
        if(loc+1 <= 100000 && !visited[loc+1]){
            qp.push({loc+1, cnt+1});
            visited[loc+1] = true;
            path[loc+1] = loc;
        }
        if(loc-1 >= 0 && !visited[loc-1]){
            qp.push({loc-1, cnt+1});
            visited[loc-1] = true;
            path[loc-1] = loc;
        }
        if(loc*2 <= 100000 && !visited[loc*2]){
            qp.push({loc*2, cnt+1});
            visited[loc*2] = true;
            path[loc*2] = loc;
        }
        
    }
    
    stack<int> s;
    int start = k;
    int cnt = 0;
    while(start != n){
        cnt++;
        s.push(start);
        start = path[start];
    }

    cout << cnt << "\n" << n << " ";
    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
    
    return 0;
}