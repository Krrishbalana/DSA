//Bitwise | operator --> works on binary numbers;
// 0 | 0 ---> 0
// 1 | 0 ---> 1
// 0 | 1 ---> 1
// 1 | 1 ---> 1
#include<iostream>
using namespace std;
int main(){
    int a = 4;    // binary form-- 100
    int b = 8;    // binary form-- 1000

    cout << (a | b) << endl; // gives 12 or decimal number system

    return 0;

}