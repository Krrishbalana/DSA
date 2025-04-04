// calculate nCr of number N
//   nCr = n! / [r! * (n-r)!]

#include<iostream>
using namespace std;
// factorical of any number
int facN(int N){
    int fac = 1;
    for(int i = 1; i <= N; i++){
        fac = fac*i;
    }
    return fac;
}

// function to calculate nCr
int nCr(int n, int r){
    int fac_n = facN(n);
    int fac_r = facN(r);
    int fac_nmr = facN(n-r);

    return fac_n / (fac_r * fac_nmr);

}

int main(){
    int n = 8, r = 2;
    cout << "nCr = " << nCr(n,r) << endl;
}