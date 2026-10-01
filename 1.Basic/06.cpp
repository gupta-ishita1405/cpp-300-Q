#include<iostream>
#include<string>
using namespace std;
class Solution{
    public:
    string islarger(int a ,int b){
        if(a>b){
            return to_string(a) + "is larger";
        }
        else if(b>a){
            return to_string(b) + "is larger";
        }
        else{
            return "both are equal";
        }

    }
};

int main(){
    Solution c;
    cout<<c.islarger(14,43)<<"\n";
    return 0;
}

