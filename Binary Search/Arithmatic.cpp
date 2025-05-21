// arithmatic in pointers
#include<iostream>
using namespace std;
int main(){
    int a = 10;
    int* ptr = &a;

    // ptr++ / ptr--
    // ++ increse 4 in value of pointer if pointer is of int type because it increase/decrease by 4bytes(memory occupie by 1 int)
    cout << ptr << endl; // if its 100
    ptr++;
    cout << ptr << endl; // it will be 104 
}