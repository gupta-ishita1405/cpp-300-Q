#include<iostream>
#include<string>
using namespace std;
class Solution{
    public:
    string istwoOddEven(int a , int b){
        if(a%2==0 && b%2==0){
            return "both even";
        }
        else if(a%2!=0 && b%2!=0){
            return "both odd";
        }
        else{
            return "one even one odd";
        }
    }
};

int main(){
    Solution c;
    cout<<c.istwoOddEven(12,16)<<"\n";
    return 0;
}
