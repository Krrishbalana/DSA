#include<iostream>
using namespace std;
string removeAllOccrance(string s, string p){
    int len = s.length() - 1;
    int end = p.length();
    while(s.find(p) < len){
        int start = s.find(p);
        s.erase(start, end);
    }
    return s;
}

int main(){
    string str = "daabcbaabcbc";
    string part = "abc";

    string newStr = removeAllOccrance(str, part);
    cout << newStr << endl;
}