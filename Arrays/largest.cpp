// largest number in array
#include<iostream>
using namespace std;
int main(){
    int largest = INT_MIN;
    int smallest = INT_MAX;
    int arr[6] = {1,2,3,4,-2,22};

    for(int i = 0; i < 6; i++){
        smallest = min(arr[i], smallest);
        largest = max(arr[i], largest);
    }
    cout << "largest: " << largest << endl;
    cout << "smallest: " << smallest << endl;
}
