#include <iostream>
#include<string>
using namespace std;
class Solution{
    public:
    string isrange(int n){
        if(n>=100 && n<=999){
            return"number lies between 100 and 999";
        }
        else{
            return"not lies between";
        }
    }

};


int main(){
    Solution c;
    cout<<c.isrange(888)<<endl;
    return 0;
}

