#include<iostream>
using namespace std;
int main(){
    string myName = "Krish balana";
    // cout << myName[1] << endl; // gives 'r'
    // for(char ch: myName){
    //     cout << ch << " "; // => K r i s h   b a l a n a 
    // }
    // cout << endl;
    int st = 0;
    int end = myName.length() - 1;
    while (st < end)
    {
    swap(myName[st] , myName[end]);
    st++;
    end--;
    }
    cout << myName << endl;


    // to reverse a string in c++ stl we have a function: => reverse(string.begin(), string.end());
    string greet = "hello world";
    reverse(greet.begin(), greet.end());
    cout << greet << endl;
}