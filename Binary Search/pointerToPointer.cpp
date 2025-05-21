#include<iostream>
using namespace std;
int main(){
    int a = 100;
    int* ptr1 = &a;  // ptr1 stores address of a
    int** ptr2 = &ptr1;   // ptr2 stores address of ptr1
    cout << ptr1 << endl;
    cout << ptr2 << endl;


    return 0;
}