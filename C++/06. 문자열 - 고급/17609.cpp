/*
 * Author : JC
 * https://www.acmicpc.net/problem/17609
*/

#include <iostream>
#include <algorithm>

using namespace std;

int left(int x, string tmp){
    int len = tmp.length();
    for(int i=x+1; i<=len/2; i++){
        if(tmp[i] != tmp[len-i]){
            return 0; 
        }
    }
    return 1;
}

int right(int x, string tmp){
    int len = tmp.length();
    for(int i=x; i<len/2; i++){ 
        if(tmp[i] != tmp[len-i-2]){
            return 0;
        }
    }
    return 1;
}

int main(){
    int t;
    string str;
    cin >> t;
    for(int i=0; i<t; i++){
        cin >> str; 
        string tmp = str;
        reverse(str.begin(), str.end());
        if(str == tmp){ 
            cout << 0 << "\n";
        }else{ 
            int len = tmp.length();
            for(int j=0; j<len/2; j++){ 
                if(tmp[j] != tmp[len-j-1]){ 
                    int r = left(j, tmp);
                    if(r == 1){
                        cout << 1 << "\n";
                        break;
                    }else{
                        r = right(j, tmp);
                        if(r == 0){
                            cout << 2 << "\n";
                        }else{
                            cout << 1 << "\n";
                        }
                        break;
                    }
                }
            }
        }
    }
    return 0;
}