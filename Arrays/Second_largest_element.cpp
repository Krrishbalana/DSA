//second largest element in an array
#include<iostream>
using namespace std;
int main(){
    int arr[] = {3,4,2,5,7,3};
    int size = 6;
    int first = INT_MIN;
    int second = INT_MIN;

    for(int i = 0; i < size; i++){
        if(arr[i] > first){
            second = first;
            first = arr[i];
        }else if (second < arr[i] && arr[i] != first)
        {
            second = arr[i];
        }
    }

    if(second == INT_MIN){
        cout << -1 << endl;
    }else{
        cout << "second largest no in array = " << second << endl;
    }
}
