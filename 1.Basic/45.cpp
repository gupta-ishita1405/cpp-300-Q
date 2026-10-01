#include <iostream>
#include<string>
using namespace std;
class Solution{
    public:
    string isAP(int a,int b,int c){
        if (a-b==b-c){
            return"Arithmatic Progression";
        }
        else{
            return "not";
        }
    }

};


int main(){
    Solution c;
    cout<<c.isAP(2,4,6)<<endl;
    return 0;
}

