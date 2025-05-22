#include<iostream>
using namespace std;

void InsertionSort(int arr[], int n){
    
    for(int i = 1; i < n; i++){
        int current = arr[i];
        int previous = i-1;
        while (previous >= 0 && arr[previous] > current) 
        {
            arr[previous + 1] = arr[previous];
            previous --;
        }
        arr[previous + 1] = current;
    }
}

void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main(){
    int arr[] = {3,5,8,1,2,6};
    int n = 6;

    InsertionSort(arr, n);
    printArray(arr, n);

}