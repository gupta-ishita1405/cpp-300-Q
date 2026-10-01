#include<iostream>
using namespace std;
class Solution{
    public:
    int issum(int n){
        int sum=0;
        for (int i=1;i<=n;i++){
            sum += i;
            
        }
        return sum;
        
    }

};

int main(){
    Solution c;
    cout<<c.issum(5);
    return 0;
}