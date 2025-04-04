//Define Parameters in functions
// sum of two integer
#include <iostream>
using namespace std;

//define function for sum of 2 numbers
int sum(int a, int b){
    int s = a+b;
    return s;
}
int min(int a, int b){
    if(a < b){
        return a;
    }
    else{
        return b;
    }
}

int main(){
    // calling function sum
    cout << sum(2,92) << endl;

    //calling function min
    cout << min(5,6) << endl;
}