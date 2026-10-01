#include<iostream>
#include<string>
using namespace std;
class Solution{
    public:
    string isEvenOdd(int n){
        if(n%2==0){
            return "Even";
        }
        else{
            return "Odd";
        }
    }
};

int main(){
    Solution c;
    cout<<c.isEvenOdd(7)<<"\n";
    return 0;
}