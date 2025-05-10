// compute X^n using binary exponation
#include <iostream>
using namespace std;

long long binaryExponentiation(long long x, long long n) {
    long long result = 1;
    while (n > 0) {
        if (n % 2 == 1) {
            result *= x;
        }
        x *= x;
        n /= 2;
    }
    return result;
}

int main() {
    long long x, n;
    cout << "Enter base (x): ";
    cin >> x;
    cout << "Enter exponent (n): ";
    cin >> n;

    cout << "Result: " << binaryExponentiation(x, n) << endl;
    return 0;
}

