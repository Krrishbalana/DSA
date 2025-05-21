#include<iostream>
#include<vector>
using namespace std;

int BinarySearch(vector<int> arr, int target){
    int st = 0;
    int end = arr.size() - 1;
    
    while(st <= end){
        int mid = st + (end-st)/2;

        if(arr[mid] == target){
            return mid;
        }
        else if(arr[mid] > target){
            end = mid - 1;
        }else{
            st = mid + 1;
        }
    }
    return -1;
}
int main(){
    vector<int> arr = {-1, 0, 3, 4, 5, 9, 12}; // for bianry search array should be sorted
    int target = 9;
    int answer = -1;

   
    cout << BinarySearch(arr, target) << endl;

}