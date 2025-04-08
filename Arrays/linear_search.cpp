#include<iostream>
using namespace std;
//function for linear search
int linearsearch(int arr[], int size, int target){
    for(int i = 0; i < size; i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1; // not found the value
}

int main(){
    int size = 7;
    int target = 2;
    int arr[]= {4,2,7,8,1,9,5};

    cout << linearsearch(arr, size, target) << endl;
    return 0;
}