/*
 * Author : JC
 * https://www.acmicpc.net/problem/19942
*/

#include <iostream>
#include <algorithm>

using namespace std;

int p[16], f[16], s[16], v[16], c[16]; // 단백질, 지방, 탄수화물, 비타민, 가격
int tmp[16], res[16];
int cost = 7500;
int mp, mf, ms, mv, n, cnt;

void check(int r1, int r2, int r3, int r4, int r5, int r6, int r7){
    tmp[r7] = r1;
    if(r2 >= mp && r3 >= mf && r4 >= ms && r5 >= mv && cost > r6){
        cost = r6;
        cnt = r7;
        for(int i=1; i<=r1; i++){
            res[i] = tmp[i];
        }
    }
    for(int i=r1+1; i<=n; i++){
        check(i, r2+p[i], r3+f[i], r4+s[i], r5+v[i], r6+c[i], r7+1);
    }
}

int main(){

    cin >> n;
    cin >> mp >> mf >> ms >> mv;
    
    for(int i=1; i<=n; i++){
        cin >> p[i] >> f[i] >> s[i] >> v[i] >> c[i];
    }
    
    for(int i=1; i<=n; i++){
        check(i, p[i], f[i], s[i], v[i], c[i], 1);
    }
    
    if(cost == 7500){
        cout << -1;
    }else{
        cout << cost << "\n";
        sort(res+1, res+cnt+1);
        for(int i=1; i<=cnt; i++){
            cout << res[i] << " ";
        }
    }
    
    return 0;
}