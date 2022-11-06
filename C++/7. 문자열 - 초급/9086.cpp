/*
 * Author : JC
 * https://www.acmicpc.net/problem/9086
*/


/*
 * Author : JC
 * https://www.acmicpc.net/problem/9086
*/

#include <iostream>
#include <string>

using namespace std;

int t;
string s;

int main(){
    
    cin >> t;
    for(int i=0; i<t; i++){
        cin >> s;
        cout << s.front() << s.back() << "\n";
    }

    return 0;
}