// Vectors are just like arrays but the major difference between arrays and vectors
// is that vector is dynamic in nature (size of vector is not fixed).
// To use vector DS we need to import STL (Standard Template Library).
#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> vecA; // size of this vector is 0
    vector<int> vecB = {1, 2, 3};
    vector<int> vecC (5,0); // 5 is the size of array and 0 is the value in every index {0, 0, 0, 0, 0}

    // cout << vecA[0] << endl; // this gives us segmentation fault (undefined behavior)
    cout << vecB[0] << endl; // this gives us value "1".
}
