//  Take a number and print whether it’s positive, negative, or zero. 
#include<iostream>
#include<string>
using namespace std;
class Solution {
    public:
    string isNumber(int x) {
        if(x>0){
            return "Positive";
        }
        else if(x==0){
            return "Zero";
        }
        else{
            return "Negative";
        }
       }

};

int main(){
    Solution c;
    cout<<c.isNumber(5)<<endl;
    return 0;
}