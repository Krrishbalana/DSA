#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int> vec;
vec.push_back(0);
vec. push_back(1);
vec. push_back(2);
cout << "size of vec = " << vec.size() << endl;
cout << "capacity of vec = " << vec.capacity() << endl;


vec.push_back(3);
cout << "size of vec after pushing '3' = " << vec.size() << endl; 
cout << "capacity of vec after pushing '3'= " << vec.capacity() << endl;


vec.push_back(4);
cout << "size of vec after pushing '4' = " << vec.size() << endl; 
cout << "capacity of vec after pushing '4' = " << vec. capacity() << endl;
}