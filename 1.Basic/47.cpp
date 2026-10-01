#include<iostream>
#include<string>
using namespace std;
class Solution{
    public:
    string isequal(int n){
        int a=n%10;
        int m=(n/10)%10;
        int l=n/100;
        if(a+l==m){
            return to_string(m) +" equal " +to_string(a)+ " + " +to_string(l);
        }
        else{
            return"unequal";
        }

    }
};


int main(){
    Solution c;
    cout<<c.isequal(132);
    return 0;
}