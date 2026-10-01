#include<iostream>
using namespace std;
class Solution{
    public:
    int issum(int n){
        int sum=1;
        while(n>0){
            int r=n%10;
            sum = sum*r;
            n=n/10;


        }
        return sum;
        
    }

};

int main(){
    Solution c;
    cout<<c.issum(123);
    return 0;
}