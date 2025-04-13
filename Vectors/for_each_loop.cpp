#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec = {11,22,33};
    vector<char> vecA = {'a', 'b', 'c'};
    for(int i : vec){
        cout << i << endl; // data type of iterator(i) = datatype of vector, and this i stor the value present in vector
    }
    for(char val : vecA){
        cout << val << endl;
    }
}