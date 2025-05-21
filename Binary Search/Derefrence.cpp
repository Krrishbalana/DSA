#include<iostream>
using namespace std;
int main(){
    int a = 10;
    int* ptr1 = &a;
    int** ptr2 = &ptr1;
    // *(address of any variable) ----> gives the value present at that address "* is known as dereferance opperator"
    cout << a << " = " << *(ptr1) << " = " << *(&a) << endl;

    cout << ptr1 << " = " << &a << " = " << *(ptr2) << " = " << *(&ptr1) << endl; // all the values are same which is address of a  
 }