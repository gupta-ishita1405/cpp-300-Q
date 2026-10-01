#include<iostream>
#include<string>
using namespace std;
class Solution{
    public:
    string isdistinct(int n){
        int v=n%10;
        int m=(n/10)%10;
        n=n /10;
        int h=(n/100)%10;
        if(h==v){
            return "first and last digit are equal";
        }
        else{
            return "all digits are distinct";
        }

    }
};


int main(){
    Solution c;
    cout<<c.isdistinct(5475)<<"\n";
    return 0;
}