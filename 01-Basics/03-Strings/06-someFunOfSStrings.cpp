// some function of strings which will help us to solve question - 1. string.find(substring) 2. string.erase(st, end)
#include<iostream>
using namespace std;
int main(){
    string str = "accabcabcbacabc";
    string substring = "abc";
    int index = substring.length() -1 ;
    int start =  str.find(substring); // return the starting point of first occurance of substring in the main string
    string newstring = str.erase(start, start + index);
    cout << newstring << endl;

}