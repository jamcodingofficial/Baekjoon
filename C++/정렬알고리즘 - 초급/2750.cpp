/*
 * Author : JC
 * https://www.acmicpc.net/problem/2750
*/

// 버블 정렬
#include <iostream>

using namespace std;

int arr[1000];
int n;

int main(){

    cin >> n;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    for(int i=n-1; i>=0; i--){
        for(int j=0; j<i; j++){
            if(arr[j] > arr[j+1]){
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }

    for(int i=0; i<n; i++){
        cout << arr[i] << "\n";
    }
    
    return 0;
}

// 선택 정렬
#include <iostream>

using namespace std;

int arr[1000];
int n;

int main(){

    cin >> n;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    for(int i=0; i<n-1; i++){
        int key = i;
        for(int j=i+1; j<n; j++){
            if(arr[key] > arr[j]){
                key = j;
            }
        }
        int tmp = arr[key];
        arr[key] = arr[i];
        arr[i] = tmp;
    }

    for(int i=0; i<n; i++){
        cout << arr[i] << "\n";
    }
    
    return 0;
}

// 삽입 정렬
#include <iostream>

using namespace std;

int arr[1000];
int n, j;

int main(){

    cin >> n;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    for(int i=1; i<n; i++){ 
        int key = arr[i]; 
        for(j=i-1; j>=0 && arr[j] > key; j--){
            arr[j+1] = arr[j]; 
        } 
        arr[j+1] = key; 
    }

    for(int i=0; i<n; i++){
        cout << arr[i] << "\n";
    }
    
    return 0;
}