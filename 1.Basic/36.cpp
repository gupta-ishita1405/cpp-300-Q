#include <iostream>
#include<string>
using namespace std;
class Solution{
    public:
    string ischeck(int a, int b){
        if(a>0 && b>0){
            int n= a+b;
            if(n<100){
                return "positive less than 100";
            }
        }
        else{
            return"invalid";
        }

    }

};


int main(){
    Solution c;
    cout<<c.ischeck(3,6);
    return 0;
}
