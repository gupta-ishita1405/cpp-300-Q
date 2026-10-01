#include<iostream>
#include<string>
using namespace std;
class Solution{
    public:
    string isdivisible( int n){
        if(n%5==0){
            return "divisible by 5";
        }
        else{
            return "not divisible by 5";
        }

    }
};

int main(){
    Solution c;
    cout<<c.isdivisible(35)<<"\n";
    return 0 ;
}