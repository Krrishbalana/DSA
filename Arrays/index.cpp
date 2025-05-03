// index in array
#include<iostream>
using namespace std;
int main(){
    int marks[5] = {22,33,45,67,5};
    int ind = 0;
    int smallest = INT_MAX;

    for(int i = 0; i < 5; i++){
        if(marks[i] < smallest){
            smallest = marks[i];
            ind = i;
        }
    }
    cout << "smallest no is:" << smallest << endl;
    cout << "index of smallest:" << ind << endl;
}
