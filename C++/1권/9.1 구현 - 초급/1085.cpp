/*
 * Author : JC
 * https://www.acmicpc.net/problem/1085
*/

#include <iostream>
#include <algorithm>

using namespace std;

int x, y, w, h;

int main(){
    
    cin >> x >> y >> w >> h;
    cout << min({h-y, y, w-x, x});

    return 0;
}