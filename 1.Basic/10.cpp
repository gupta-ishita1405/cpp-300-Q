#include <iostream>
#include<string>
using namespace std;
class Solution{
    public:
    string ischaracter (char c){
        if(c>'A' &&c<'Z'){
            return "UpperCase";
        }
        else if(c>'a'&& c<'z'){
            return "Lowercase";
        }
        else if(c>0 && c<9){
            return "Digits";
        }
        else{
            return "special character";
        }
    }
};

int main(){
    Solution c;
    cout<<c.ischaracter('*')<<"\n";
    return 0;
}