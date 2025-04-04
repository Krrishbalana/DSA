//paas by value
#include<iostream>
using namespace std;

//define functions
int sum(int a, int b){
    a = a+10;      // it will not affect a in the main function because this a is copy of a(present in main function)
    b = b+10;
    return a+b;    // it will not affect b in the main function because this a is copy of b(present in main function)
}

int main(){
    int a=5, b=10; // copy of arguments which is passed to the functions
    // calling function
    cout << sum(a , b) << endl;  // pass by value

    cout << a << endl << b << endl; // these a and b will remain same because they are stored in main function 
}