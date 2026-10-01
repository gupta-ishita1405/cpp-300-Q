#include <iostream>
#include<string>
using namespace std;
class Solution{
    public:
    string iseligibletax(int age ,int income){
        if(age > 18 && income > 500000){
            return "eligible for tax";
        }
        else{
            return "not";
        }
    }

};


int main(){
    Solution c;
    cout<<c.iseligibletax(31,100000000000000);
    return 0;
}
