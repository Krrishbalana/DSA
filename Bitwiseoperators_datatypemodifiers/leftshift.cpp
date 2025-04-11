//Bitwise <<(left shift operator) operator --> works on binary numbers;
// it gives ans = a * 2^b
#include<iostream>
using namespace std;
int main(){
    int a = 4;    // binary form-- 100
    int b = 1;    // binary form-- 1000

    cout << (a << b) << endl;

    return 0;

}