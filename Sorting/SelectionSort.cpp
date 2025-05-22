#include<iostream>
using namespace std;

void SelectionSort(int arr[], int n){
    for(int i = 0; i < n-1; i++){
        int smallestIndex = i;

        for(int j = i+1; j < n; j++){
            if(arr[j] < arr[smallestIndex]){
                smallestIndex = j;
            }
        }
        swap(arr[i], arr[smallestIndex]);
    }
    return;
}

void printSortedArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    cout << endl;

    return; 
}


int main(){
    int arr[] = {4,1,5,2,3};
    int n = 5;


    SelectionSort(arr , n);
    printSortedArray(arr, n);

}