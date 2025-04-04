//Calculate N factorial
#include<iostream>
using namespace std;
//define func.
int facN(int N){
    int fac = 1;
    for(int i = 1; i <= N; i++){
        fac = fac*i;
    }
    return fac;
}


int main(){
    cout << facN(10) << endl;
    cout << facN(5) << endl;
}