#include <iostream>
#include<string>
using namespace std;
class Solution{
    public:
    int isGCD(int a,int b){
        while(a!=b){
            if(a>b){
                a=a-b;
            }
            else{
                b=b-a;
            }
            cout<<a<<" "<<b<<endl;
        }
    }
};


int main(){
    Solution c;
    c.isGCD(21,35);
    return 0;
}
