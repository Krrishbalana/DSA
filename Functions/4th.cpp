//Calculate sum of numbers 1-N using functions
#include<iostream>
using namespace std;

// define functions
int sum(int N){
    int sum=0;
    for(int i=1; i <= N; i++){
        sum += i;
    }
    return sum;
}

int main(){
    // call funtion to print sum of 1-N
    int s = sum(10);
    cout << "sum = " << s << endl;

} 