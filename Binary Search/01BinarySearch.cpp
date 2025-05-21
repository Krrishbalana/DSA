#include<iostream>
using namespace std;
int main(){
    int arr[] = {-1, 0, 3, 4, 5, 9, 12}; // for bianry search array should be sorted
    int target = 9;
    int answer = -1;

    //solution
    int st = 0;
    int end = (sizeof(arr)/sizeof(arr[0])) - 1;
    
    while(st <= end){
        int mid = st + (end-st)/2;

        if(arr[mid] == target){
            mid = answer;
        }
        else if(arr[mid] > target){
            end = mid - 1;
        }else{
            st = mid + 1;
        }
    }

    cout << answer << endl;

}