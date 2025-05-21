#include<iostream>
using namespace std;
int main(){
    int a = 10;
    int* ptr = &a;       // ptr stores an hexadecimal value with reffers to the location where a in stored in the memory of PC
    cout << ptr << endl;  // ptr is nothing, just the name of pointer(as per your wish)

    return 0;
}