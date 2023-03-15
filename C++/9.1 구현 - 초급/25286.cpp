/*
 * Author : JC
 * https://www.acmicpc.net/problem/25286
*/

#include <iostream>

using namespace std;

int t, y, m;
int month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main(){
    
    cin >> t;
    for(int i=0; i<t; i++){
        cin >> y >> m;
        if(m == 1){
            cout << y-1 << " 12 31\n";
        }else if(m == 3){
            if((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)){
                cout << y << " 2 29\n";
            }
            else{
                cout << y << " 2 28\n";
            }
        }else{
            cout << y << " " << m-1 << " " << month[m-1] << "\n";
        }
    }
}