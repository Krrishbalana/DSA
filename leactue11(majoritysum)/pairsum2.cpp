// more optiomized approach for pair sum (two pointer approach)
#include<iostream>
#include<vector>

using namespace std;
vector<int> pairsum(vector<int> nums, int target){
    int n = nums.size();
    int i = 0, j = n-1;
    vector<int> ans;

    while(i < j){
        int PS = nums[i] + nums[j];
        if(PS > target){
            j--;
        }
        else if(PS < target){
            i++;
        }
        else if(PS == target){
            ans.push_back(i);
            ans.push_back(j);
            return ans; // here we can also use break statement(break;)
        }
    }
    return ans;
}


int main(){
    vector<int> nums = {2, 7, 11, 15};
    int target = 13;

    vector<int> ans = pairsum(nums , target);
    cout << ans[0] << " " << ans[1] << endl;

}