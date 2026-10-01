#include<iostream>
using namespace std;
class Solution{
    public:
    int issum(int n){
        int sum=1;
        for (int i=1;i<=n;i++){
            sum = sum*i;
        }
        return sum;
        
    }

};

int main(){
    Solution c;
    cout<<c.issum(5);
    return 0;
}