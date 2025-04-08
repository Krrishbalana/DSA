#include<iostream>
using namespace std;

//fuction to change array
void changearr(int arr[],int size){
    for(int i = 0 ; i < size ; i++){
        arr[i] = 2 * arr[i];
    }
}

int main(){
    int arr[] = {1,2,3};

    changearr(arr, 3);

    cout<< "after change\n";
    for(int i = 0; i < 3; i++){
        cout << arr[i] <<  " ";
    }
    cout << endl;

    return 0;
}