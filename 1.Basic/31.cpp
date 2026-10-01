#include <iostream>
#include<string>
using namespace std;
class Solution{
    public:
    string ischaracter (char c){
        if(c>'A' &&c<'Z'|| c>'a'&& c<'z'){
            return "letter";
        }
        else if(c>0 && c<9){
            return "Digits";
        }
        else{
            return "neither";
        }
    }
};

int main(){
    Solution c;
    cout<<c.ischaracter('*')<<"\n";
    return 0;
}