#include <iostream>
#include<string>
using namespace std;
class Solution{
    public:
    string ismonth(int date1,int a,int date2,int b){
        if (a>b){
            return to_string(a) +" is the month will come first "+ to_string(date1);
         }
    
        else{
            return to_string(b)+ " is the month will come first "+ to_string(date2);
        }
    
    }

};


int main(){
    Solution c;
    cout<<c.ismonth(14,8,9,12);
    return 0;
}
