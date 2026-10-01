#include <iostream>
#include<string>
using namespace std;
class Solution{
    public:
    string isDivisible(int n){
        if(n%5==0 && n%3==0){
            return "divisible by 3 and 5";
        }
        else if(n%3==0){
            return"divisible by 3 only";
        }
        else{
        return"divisible by 5 only";
        }
    }
};

int main(){
    Solution c;
    cout<<c.isDivisible(24)<<"\n";
    return 0;
}
