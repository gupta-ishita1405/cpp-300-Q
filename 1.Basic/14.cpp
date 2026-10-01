#include<iostream>
#include<string>
using namespace std;
class Solution{
    public:
    string isMultiple(int a, int b){
        if(a%b==0 ){
            return to_string(b)+ " is multiple";
        }
        else if(b%a==0){
            return to_string(b)+ " is multiple";
        }
        else{
            return "not mutiple";
        }
    }
};

int main(){
    Solution c;
    cout<<c.isMultiple(3,8)<<"\n";
    return 0;
}
