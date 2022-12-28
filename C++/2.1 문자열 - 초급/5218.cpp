/*
 * Author : JC
 * https://www.acmicpc.net/problem/5218
*/

#include <iostream>
#include <string>

using namespace std;

int t;
string x, y;

int main(){

    cin >> t;
    
    for(int i=0; i<t; i++){
        cin >> x >> y;
        int len = x.length();
        cout << "Distances: ";
        for(int j=0; j<len; j++){
            if(x[j] <= y[j]){
                cout << y[j] - x[j] << " ";
            }else{
                cout << y[j] + 26 - x[j] << " ";
            }
        }
        cout << "\n";
    }

    return 0;
}
