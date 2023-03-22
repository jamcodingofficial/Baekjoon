/*
 * Author : JC
 * https://www.acmicpc.net/problem/2511
*/

#include <iostream>

using namespace std;

int arr[10];
int brr[10];
int a, b;
char winner;

int main(){
    
    for(int i=0; i<10; i++){
        cin >> arr[i];
    }
    for(int i=0; i<10; i++){
        cin >> brr[i];
    }
    
    for(int i=0; i<10; i++){
        if(arr[i] > brr[i]){
            a += 3;
            winner = 'A';
        }else if(arr[i] < brr[i]){
            b += 3;
            winner = 'B';
        }else{
            a += 1;
            b += 1;
        }
    }

    cout << a << " " << b << "\n";
    if(a == b){
        if(a == 10){
            cout << "D";
        }else{
            cout << winner;
        }
    }else{
        if(a > b){
            cout << "A";
        }else{
            cout << "B";
        }
    }

    return 0;
}