#include<iostream>
using namespace std;
class Solution{
    public:
    int iscount(int n){
        int sum=0;
        while(n>0){
            int r =n%10;
            sum=sum+r;
            n=n/10;

        }
       return sum; 
        
    }

};

int main(){
    Solution c;
    cout<<c.iscount(123);
    return 0;
}