#include <iostream>
#include<string>
using namespace std;
class Solution{
    public:
    string isGP(int a,int b,int c){
        if (a*b==b*c){
            return"Geometric Progression";
        }
        else{
            return "not";
        }
    }

};


int main(){
    Solution c;
    cout<<c.isGP(2,4,6)<<endl;
    return 0;
}
