//paas by value
#include<iostream>
using namespace std;

//define functions
int sum(int a, int b){
    return a+b;
}

int main(){
    int x=5, y=10;
    // calling function
    cout << sum(x,y) << endl;  // pass by value
}