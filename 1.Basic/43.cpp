#include <iostream>
#include<string>
using namespace std;
class Solution{
    public:
    string iscalender(int date,int month){
        if (month ==2){
            if(month>=1 and month<=28){ 
                return "valid";
            }
            else{ 
                return "Invalid";
            }
        }
        else if(month ==4 or month==6 or month==9  or month==11){ 
            if(month>=1 and month<=30){
                return "valid";}
            else{
                return "Invalid";
            }
        }
        else if(month ==1 or month==3 or month==5  or month==7 or month ==8 or month==10 or month==12  ){ 
            if(month>=1 and month<=30){
                return "valid";}
            else{
                return "Invalid";
            }
        }
        else{
            return "Invalid";
        }
    }
};


int main(){
    Solution c;
    cout<<c.iscalender(28,9);

    return 0;
}
