//Calculate sum of digits of a number
#include<iostream>
using namespace std;
//define function
int Sum(int n){
    int sum = 0;
    int lastdig;
    while(n > 0){
        lastdig = n % 10;
        sum = sum + lastdig;
        n = n / 10;
    }
    return sum;
    
}

int main(){
    cout << Sum(14567) << endl;
}