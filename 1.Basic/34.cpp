#include<iostream>
#include<string>
using namespace std;
class Solution{
    public:
    string isday(int n){
        if(n>12 && n<23){
            return to_string(n)+"pm";
        }
        else{
            return to_string(n)+"am";
        }
    }
};


int main(){
    Solution c;
    cout<<c.isday(15)<<"\n";
    return 0;
}