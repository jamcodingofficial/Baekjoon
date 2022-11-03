/*
 * Author : JC
 * https://www.acmicpc.net/problem/2587
*/

// 버블 정렬
#include <iostream>

using namespace std;

int arr[5];
int sum;

int main(){

    for(int i=0; i<5; i++){
        cin >> arr[i];
        sum += arr[i];
    }    

    for(int i=4; i>=0; i--){
        for(int j=0; j<i; j++){
            if(arr[j] > arr[j+1]){
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }

    cout << sum / 5 << "\n";
    cout << arr[2];
    
    return 0;
}

// 선택 정렬
#include <iostream>

using namespace std;

int arr[5];
int sum;

int main(){

    for(int i=0; i<5; i++){
        cin >> arr[i];
        sum += arr[i];
    }   
    
    for(int i=0; i<4; i++){
        int key = i;
        for(int j=i+1; j<5; j++){
            if(arr[key] > arr[j]){
                key = j;
            }
        }
        int tmp = arr[key];
        arr[key] = arr[i];
        arr[i] = tmp;
    }

    cout << sum / 5 << "\n";
    cout << arr[2];
    
    return 0;
}

// 삽입 정렬
#include <iostream>

using namespace std;

int arr[5];
int sum, j;

int main(){

    for(int i=0; i<5; i++){
        cin >> arr[i];
        sum += arr[i];
    }   
    
    for(int i=1; i<5; i++){ 
        int key = arr[i]; 
        for(j=i-1; j>=0 && arr[j] > key; j--){
            arr[j+1] = arr[j]; 
        } 
        arr[j+1] = key; 
    }

    cout << sum / 5 << "\n";
    cout << arr[2];
    
    return 0;
}