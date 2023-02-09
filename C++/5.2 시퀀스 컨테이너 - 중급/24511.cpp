#include <iostream>
#include <deque>

using namespace std;

bool check[100000];
int n, k, m;
deque<int> d;

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> check[i];
    }

    for(int i=0; i<n; i++){
        cin >> k;
        if(check[i] == false) d.push_back(k);
    }
    
    cin >> m;
    for(int i=0; i<m; i++){
        int c;
        cin >> c;
        d.push_front(c);
        cout << d.back() << " ";
        d.pop_back();
    }
    
    return 0;
}