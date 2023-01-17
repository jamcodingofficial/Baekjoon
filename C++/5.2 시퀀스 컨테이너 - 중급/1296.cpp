/*
 * Author : JC
 * https://www.acmicpc.net/problem/1296
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

string str;
int yeondoo[4];
int n;

int main(){
    
    cin >> str;
    int yeondoo_len = str.length();
    for(int i=0; i<yeondoo_len; i++){
        if(str[i] == 'L'){
            yeondoo[0]++;
        }else if(str[i] == 'O'){
            yeondoo[1]++;
        }else if(str[i] == 'V'){
            yeondoo[2]++;
        }else if(str[i] == 'E'){
            yeondoo[3]++;
        }
    }
    
    cin >> n;
    int res_num = 0;
    string res_name = "z";
    
    for(int i=0; i<n; i++){
        string name;
        cin >> name;
        int team[4]={};
        int team_len = name.length();
        for(int j=0; j<team_len; j++){
            if(name[j] == 'L'){
                team[0]++;
            }else if(name[j] == 'O'){
                team[1]++;
            }else if(name[j] == 'V'){
                team[2]++;
            }else if(name[j] == 'E'){
                team[3]++;
            }
        }
        
        int L = yeondoo[0] + team[0];
        int O = yeondoo[1] + team[1];
        int V = yeondoo[2] + team[2];
        int E = yeondoo[3] + team[3];
        int value = ((L+O) * (L+V) * (L+E) * (O+V) * (O+E) * (V+E)) % 100;
        if(res_num < value){
            res_num = value;
            res_name = name;
        }else if(res_num == value){
            if(res_name > name){
                res_name = name;
            }
        }
    }
    
    cout << res_name;
    
    return 0;
}