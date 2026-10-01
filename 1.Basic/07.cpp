#include<iostream>
#include<string>
using namespace std;
class Solution{
    public:
    string islarger(int a ,int b, int c){
        if(a>b&& a>c){
            return to_string(a) +" is largest";
        }
        else if (b>a && b>c){
            return to_string(b)+ " is largest ";
        }
        else{
            return to_string(c) + " is largest";
        }
    }
};


int main(){
    Solution c;
    cout<<c.islarger(5,8,23)<<endl; 
    return 0;
}