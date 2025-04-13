#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<char> vec = {'a', 'b', 'c', 'd', 'e'};
    int x = 3;

    //functions of vectors
    cout << "size = " << vec.size() << endl; // to find the size of 

    vec.push_back('f'); // to add an element in vector
    cout << "size after puch back = " << vec.size() << endl;

    vec.pop_back(); // delets the last value = 'f'
    cout << "size after pop back = " << vec.size() << endl;

    cout << "first value of vec = " << vec.front() << endl; // it gives the first/front value of the vector
    cout << "last value of vec = " << vec.back() << endl; // it gives the last value of the vector
    cout << "at position x = " << vec.at(x) << endl; // gives the value at xth position(similar to vec[x])
    cout << vec[x] << endl;
    
}