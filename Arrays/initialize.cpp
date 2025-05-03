// array initializing 
#include<iostream>
using namespace std;
int main(){
    int marks[5] = {22,33,45,67,54};
    cout << marks[0] << endl;

    marks[0] += 10;
    cout << marks[0] << endl;

    cout << "size of array is - " << sizeof(marks) / sizeof(int) << endl;
    return 0;
}
