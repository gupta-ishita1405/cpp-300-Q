#include<iostream>
using namespace std;
class Solution{
    public:
    int issum(int n){
        int sum=0;
        for (int i=1;i<=n;i++){
            if(i%2==0){
                sum += i;
            }
            
            
        }
        return sum;
        
    }

};

int main(){
    Solution c;
    cout<<c.issum(5);
    return 0;
}