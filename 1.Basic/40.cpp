#include <iostream>
#include<string>
using namespace std;
class Solution{
    public:
    string ispassword(string password){
        if (password.length()>=8 && password.find_first_of("0123456789") != string::npos ){
            return "valid";
        }
        else{
            return "Invalid";
        }


    }

};


int main(){
    Solution c;
    cout<<c.ispassword("Ishi8909");
    return 0;
}
