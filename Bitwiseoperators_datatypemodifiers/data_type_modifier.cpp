// Data Type Modifiers - change meaning of the data type
// ------------
// 1. long- >= 4bytes
// 2. short- decreses size of int from 4 bytes to 2 bytes
// 3. long long-
// 4. signed- signed datatypes are those eho can store +ve as well as -ve numbers
// 5. unsigned-

#include<iostream>
using namespace std;
int main(){
    unsigned int a = -10;
    cout << sizeof(int) << endl;
    cout << sizeof(long int) << endl;
    cout << sizeof(short int) << endl;
    cout << sizeof(long long int) << endl;
    cout << a << endl; // this will give us any rendom +ve number
}