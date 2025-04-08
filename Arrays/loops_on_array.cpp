#include<iostream>
using namespace std;
int main(){
    int size = 5;
    int marks[size];
    


    //loop on array for input
    for(int i = 0; i < size ; i++){
        cin >> marks[i];
    }
    cout << "your array is - \n";
    // loop on array for output
    for(int i = 0; i < size; i++){
        cout << marks[i] << endl;
    }

    return 0;
}