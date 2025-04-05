// convert decimal number to binary number system
#include<iostream>
using namespace std;
// defineing function to convert decimal no to binary no
int binNum(int n){
    int ans = 0;
    int pow = 1; // 10^0 = 1 ---> 10^1 --> 10^2 --> and so on
    while (n > 0)
    {
        int rem = n % 2;
        n = n/2;


        ans += (rem * pow);
        pow *= 10;
    }
    return ans;
}


int main(){
    int n=5;
    cout << binNum(n) << endl;
}