#include<iostream>
using namespace std;
class Solution{
    public:
    int iscount(int n){
        int count=0;
        while(n>0){
            int r=n%10;
            count = count +1;
            n=n/10;


        }
        return count;
        
    }

};

int main(){
    Solution c;
    cout<<c.iscount(123);
    return 0;
}