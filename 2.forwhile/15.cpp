#include<iostream>
#include<iostream>
using namespace std;
class Solution{
    public:
    string iscount(int n){
        int m=n;
        int sum=0;
        while(n>0){
            int r =n%10;
            sum=sum+r*r*r;
            n=n/10;

        }
        if(sum==m){
            return"Armstrong number";
        }
        else{
            return"not";
        }

        
    }

};

int main(){
    Solution c;
    cout<<c.iscount(153);
    return 0;
}