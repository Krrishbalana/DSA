#include<iostream>
using namespace std;

//define function
int printhello(){
    cout << "Hello\n";
    return 5;
}
int main(){
    cout << printhello() << endl;

    int val = printhello();
    cout << "val = " << val << endl;

    printhello();

    return 0;
}