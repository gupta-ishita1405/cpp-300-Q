#include<iostream>
#include<string>
using namespace std;
class Solution{
    public:
    string iscount(int n){
        int m=n;
        int sum=0;
        while(n>0){
            int r =n%10;
            sum=sum*10+r;
            n=n/10;

        }
        if(m==sum){
            return " palindrome";
        }
        else{
            return "not";
        }
        
    }

};

int main(){
    Solution c;
    cout<<c.iscount(121);
    return 0;
}