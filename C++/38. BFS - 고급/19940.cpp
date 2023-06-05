#include <iostream>
#include <queue>

using namespace std;

struct Data{
    int a, b, c, d, e, f; 
};

queue<Data> q;
bool check[61]; 
Data res[61]; 

void bfs(){
    while(!q.empty()){
        Data tmp = q.front(); 
        q.pop();
        if(tmp.a >= 0 && tmp.a <= 60 && !check[tmp.a]){
            check[tmp.a] = true;
            res[tmp.a] = tmp; 
            q.push({tmp.a-1, tmp.b, tmp.c, tmp.d, tmp.e, tmp.f+1});
            q.push({tmp.a+1, tmp.b, tmp.c, tmp.d, tmp.e+1, tmp.f}); 
            q.push({tmp.a-10, tmp.b, tmp.c, tmp.d+1, tmp.e, tmp.f}); 
            q.push({tmp.a+10, tmp.b, tmp.c+1, tmp.d, tmp.e, tmp.f}); 
            q.push({tmp.a+60, tmp.b+1, tmp.c, tmp.d, tmp.e, tmp.f}); 
        }
    }
}

int main(){
    q.push({0, 0, 0, 0, 0, 0});
    bfs();
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        int m;
        cin >> m;
        cout << res[m%60].b+m/60 << " " << res[m%60].c << " " << res[m%60].d << " " << res[m%60].e << " " << res[m%60].f << "\n";
    }

    return 0;
}