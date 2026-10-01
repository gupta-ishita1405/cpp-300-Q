#include<iostream>
#include<string>
using namespace std;
class Solution{
    public:
    string isword(int n){
        switch(n){
            case 1:
            return "One";
            case 2:
            return "Two";
            case 3:
            return "Three";
            case 4:
            return "Four";
            case 5:
            return "Five";
            case 6:
            return "six";
            case 7:
            return "Seven";
            case 8:
            return "Eight";
            case 9:
            return "Nine";
            default:
            return "invalid";


        }
    }
};


int main(){
    Solution c;
    cout<<c.isword(4)<<"\n";
    return 0;
}
