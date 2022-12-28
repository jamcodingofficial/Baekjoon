/*
 * Author : JC
 * https://www.acmicpc.net/problem/9093
*/

#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int n;
string str;
queue<string> q;

int main(){
    
    cin >> n;
    cin.ignore();
    for(int i=0; i<n; i++){
        getline(cin, str);
        str += " ";
        int len = str.length();
        string tmp;
        for(int j=0; j<len; j++){
            if(str[j] == ' '){
                reverse(tmp.begin(), tmp.end());
                q.push(tmp);
                tmp.clear();
            }else{
                tmp += str[j];
            }
        }
        while(!q.empty()){
            cout << q.front() << " ";
            q.pop();
        }
        cout << "\n";
    }

    return 0;
}