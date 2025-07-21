#include<iostream>
using namespace std;
int main(){
    // define a string 
    //1st way
    string str1;
    str1 = "Hello dosto"; // Strings of c++ are dynamic in nature because it resizes on run time.
    string str2 = "kaise ho aap";
    cout << str1 << endl;
    str1 = "hello! "; // this is not possible with the character array.
    cout << str1 << str2 << endl;
    
    //concatination.
    cout << str1 + str2 << endl;

    //comparison(==, < , >) => greater than and smaller than are lexico graphically based comparison.
    cout << (str1 == str2) << endl; // false/0

    //input from user using cin
    // string str3;
    // cout << "enter string str3: ";
    // cin >> str3; // input1: hello => output1: hello | input2: hello dosto => output2: hello
    // cout << str3 << endl;

    //input from user using getline
    string str4;
    cout << "enter string str4"; // input1: hello => output1: hello | input2: hello dosto => output2: hello dosto
    getline(cin, str4);
    cout << str4 << endl;

}