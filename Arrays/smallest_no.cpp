#include<iostream>
using namespace std;
int main(){
     int smallest = INT_MAX;
     int arr[6] = {5,15,22,1,-15,24};

     for(int i = 0; i < 6; i++){
        if(arr[i] < smallest){
            smallest = arr[i];
        }
     }
     cout << "smallest = " << smallest << endl;
}