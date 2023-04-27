/*
 * Author : JC
 * https://www.acmicpc.net/problem/1436
*/

#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    if(n == 1){
        cout << 666;
    }else{
        int num = 1666;
        int check = 1;
        while(1){
            int tmp = num;
            while(tmp){
                if(tmp%1000 == 666){
                    check++;
                    break;
                }
                tmp /= 10;
            }
            if(n == check){
                cout << num;
                return 0;
            }
            num++;
        }
    }

    return 0;
}