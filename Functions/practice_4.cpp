// WAP to printe all prime numbers from 1-N
#include<iostream>
using namespace std;
//function defining for checking number is prime or not
bool isprime(int n){
    bool isprime = true;
    for(int i = 2; i*i <= n; i++){
        if(n%i  == 0){
            isprime = false;
        }
    }
    return isprime;
}

int main(){
    int n = 10;
    for(int i=1; i <= n; i++){
        if(isprime(i)){
            cout << i << endl;
        }
    }
}