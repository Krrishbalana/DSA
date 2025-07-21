#include<iostream>
using namespace std;
bool checkPalandrome(string sample){
    string temp = sample;
    reverse(temp.begin(), temp.end());
    if(temp == sample){
        return true;
    }
    return false;
}

int main(){
    string sample = "racecar";
    cout << checkPalandrome(sample) << endl;

}