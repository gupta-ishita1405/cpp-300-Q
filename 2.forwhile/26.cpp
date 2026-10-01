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
            
        }
        int hcf=a=b;
        int lcm= a*b/hcf;
        cout<<lcm<<endl;

    }
};


int main(){
    Solution c;
    c.isGCD(12,16);
    return 0;
}
