#include<iostream>
using namespace std;
bool validCh(char ch){
    if((tolower(ch) >= 'a' && tolower(ch) <= 'z') || (tolower(ch) >= '0' && tolower(ch) <= '9')){
        return true;
    }
    return false;
}
bool isValidPalindrome(string str){
    int st = 0;
    int end = str.length()-1;
    while (st<end)
    {
        if(! validCh(str[st])){st++; continue;}
        if(! validCh(str[end])){end--; continue;}
        if(tolower(str[st]) != tolower(str[end])){
            return false;
        }
        st ++;
        end --;
    }
    return true;
}

int main(){
    string str = "A man, a plan, a canal: Panama";
    
    cout << isValidPalindrome(str) << endl;
}