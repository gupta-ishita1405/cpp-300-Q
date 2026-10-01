#include <iostream>
using namespace std;
class Solution{
    public:
    void isfibann(int n){
        int sum=0;
        int a=0;
        int b=1;
        for (int i=1;i<n+1;i++){
            sum= sum +a;
            int temp=a+b;
            a=b;
            b=temp;
            
            
        }
        cout<<sum;

    }
};

int main(){
    Solution c;
    c.isfibann(5);
    return 0;
}