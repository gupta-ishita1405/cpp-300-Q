#include <iostream>
using namespace std;
class Solution{
    public:
    void isfibann(int n){
        int a=0;
        int b=1;
        for (int i=1;i<n+1;i++){
            cout<<a<<" ";
            int temp=a+b;
            a=b;
            b=temp;
            
        }

    }
};

int main(){
    Solution c;
    c.isfibann(20);
    return 0;
}