/*
 * Author : JC
 * https://www.acmicpc.net/problem/2920
*/

#include <iostream>

using namespace std;

int arr[9];

int main() {
    for(int i=1; i<=8; i++){
        cin >> arr[i];
    } 
    
    int asc = 0;
    int des = 0;

    for(int i=1; i<=8; i++){
        if(arr[i] == i){
            asc++;
        }
        if(arr[i] == 9-i){
            des++;
        }
    }

    if(asc == 8){
        cout << "ascending";
    }else if(des == 8){
        cout << "descending";
    }else{
        cout << "mixed";
    }

    return 0;
}