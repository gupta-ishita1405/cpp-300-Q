#include<iostream>
#include<string>
using namespace std;
class Solution{
    public:
    string isElibility(int n){
        if(n>=18){
            return "Eligibility";
        }
        else{
            return"not eligible";
        }
    }
};

int main(){
    Solution c;
    cout<<c.isElibility(6)<<"\n";
    return 0;
}