//scope of variables- there are two types of scope
// local scope and global scope
// 1. local scope - variables define in if-else, functions, in block of code{}, loops, etc.
// 2. global scope - a variable that is existing in the code everywhere
#include<iostream>
using namespace std;

int a = 3; // this is global variable for the code

int main(){
    if(3 < 1){
        int x = 3;         // this is local variable, only exist in if statement
        cout << a << endl; // it is assesable here 
    }
    // cout << x << endl;   // this will give us error because x do not exist out of the if statement
    cout << a << endl;   // it is assesable here also
}