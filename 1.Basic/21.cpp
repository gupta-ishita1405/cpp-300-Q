#include<iostream>
#include<string>
using namespace std;
class Solution{
    public:
    string isdistinct(int n){
        int v=n%10;
        int m=(n/10)%10;
        n=n /100;
        if(v!=m && v!=n){
            return"distinct all digits";
        }
        else{
            return "all digits are not distinct";
        }

    }
};


int main(){
    Solution c;
    cout<<c.isdistinct(543)<<"\n";
    return 0;
}