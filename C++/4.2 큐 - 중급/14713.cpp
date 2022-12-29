/*
 * Author : JC
 * https://www.acmicpc.net/problem/14713
*/

#include <iostream>
#include <queue>

using namespace std;

int n;
string str, ans;
queue<string> q[100];

int main() {

    cin >> n;
    cin.ignore();
    for(int i=0; i<n; i++){
        getline(cin, str);
        str += " ";
        int len = str.length();
        string tmp;
        for(int j=0; j<len; j++){
            if(str[j] == ' '){
                q[i].push(tmp);
                tmp.clear();
            }else{
                tmp += str[j];
            }
        }
    }
    
    getline(cin, ans);
    ans += " ";
    int len = ans.length();

    string tmp;
    bool check = true;
    for(int i=0; i<len; i++){
        if(ans[i] == ' '){
            check = false;
        }else{
            tmp += ans[i];
        }
        if(check == false){
            for(int j=0; j<n; j++){
                if(!q[j].empty()){
                    if(q[j].front() == tmp){
                        q[j].pop();
                        tmp.clear();
                        check = true;
                        break;
                    }
                }
            }
            if(check == false){
                cout << "Impossible";
                return 0;
            }
        }
    }
    
    for(int j=0; j<n; j++){
        if(!q[j].empty()){
            cout << "Impossible";
            return 0;
        }
    }
    
    cout << "Possible";
    
    return 0;
}