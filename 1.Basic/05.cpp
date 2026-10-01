#include<iostream>
#include<string>
using namespace std;
class Solution{
    public:
    string isleapyear(int n){
        if(n%4==0 && n%100!=0 || n%400==0){
            return"leap year";
        }
        else{
            return"not";
        }
    }
};

int main(){
    Solution c;
    cout<<c.isleapyear(1990)<<"\n";
    return 0;
}