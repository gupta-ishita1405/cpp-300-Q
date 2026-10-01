#include<iostream>
#include<string>
using namespace std;
class Solution{
    public:
    string isnumber7(int n){
        if(n%7==0 ||n%10==7){
            return "ends with 7 or multiple of 7";
        }
        else{
            return "not both";
        }
    }
};


int main(){
    Solution c;
    cout<< c.isnumber7(49)<<endl;
    return 0;
}