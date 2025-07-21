#include<iostream>
using namespace std;
int main(){
    //define char array
    //1.
    char str1[] = {'a', 'b', 'c', 'd', '\0'}; // \0 use to terminate the length of the string that sting overs here
    cout << str1 << endl;
    cout << strlen(str1) << endl; // this do not inclue '\0' in the length which is justified
    //2.
    char str2[] = "krish balana"; // later on we can not change the value of str2 bcz this is not a modifyable lvalue 
    cout << str2 << endl;
    cout << strlen(str2) << endl;

    //taking input from user
    // using cin
    // char str3[100];
    // cout << "enter the character array: ";
    // cin >> str3; // input1: krish => output1: krish | input 2: krish balana => output2: krish
    // cout << str3 << endl; 
    //using cin.getlines
    char str4[100];
    cout << "enter the character array: ";
    cin.getline(str4,100); // input1: krish => output1: krish | input 2: krish balana => output2: krish balana
    cout << str4 << endl; 
}