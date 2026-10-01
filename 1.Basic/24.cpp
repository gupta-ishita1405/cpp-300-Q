#include <iostream>
#include<string>
using namespace std;
class Solution{
    public:
    string isdigit(int n){
        if(n>0 && n<9){
            return to_string(n) + " single digit";
        }
        else if(n>10 && n<99){
             return to_string(n) + " double digits";
        }
        else if(n>100 && n<999){
             return to_string(n) + " multi digit";
        }
        else{
            return to_string(n) +"unknown";
        }
    }
};


int main(){
    Solution c;
    cout<<c.isdigit(12)<<"\n";
    return 0;
}