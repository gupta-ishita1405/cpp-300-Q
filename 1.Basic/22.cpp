#include<iostream>
#include<string>
using namespace std;
class Solution{
    public:
    string isdistinct(int n){
        int v=n%10;
        int m=(n/10)%10;
        n=n /100;
        if(v!=m && v!=n){
           if(m>v && m>n){
            return "middle digit is largest";
           }
           else if(v>m && n>m){
            return "middle is smallest digit";
           }
           else{
            return "neither";
           }
        }
        else{
            return "all digits are not distinct";
        }

    }
};


int main(){
    Solution c;
    cout<<c.isdistinct(547)<<"\n";
    return 0;
}