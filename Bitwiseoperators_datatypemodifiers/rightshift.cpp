//Bitwise >>(right shift) operator --> works on binary numbers;
// it gives ans = a/b^2
#include<iostream>
using namespace std;
int main(){
    int a = 4;    // binary form-- 100
    int b = 1;    // binary form-- 1000

    cout << (a >> 1) << endl;

    return 0;

}