//Bitwise XOR(^) operator --> works on binary numbers;
// if bits are same ---> it gives 0
// if bits are different ---> it gives 1
// 0 ^ 0 ---> 0
// 1 ^ 0 ---> 0
// 0 ^ 1 ---> 0
// 1 ^ 1 ---> 1
#include<iostream>
using namespace std;
int main(){
    int a = 4;    // binary form-- 100
    int b = 8;    // binary form-- 1000

    cout << (a ^ b) << endl;

    return 0;

}