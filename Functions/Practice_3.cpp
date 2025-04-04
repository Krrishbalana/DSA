// check the number is prime or not
#include<iostream>
using namespace std;
// define functtion to check number is prime or not
void isprime(int n){
    bool isprime = true;
    for(int i = 2; i*i <= n; i++){
        if(n%i  == 0){
            isprime = false;
        }
    }
    if(isprime){
        cout << "number is prime\n";
    }else{
        cout << "number is not prime\n";
    }
}

int main(){
    isprime(4);
}