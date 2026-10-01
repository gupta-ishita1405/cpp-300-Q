#include <iostream>
#include<string>
using namespace std;
class Solution{
    public:
    void isdivisible(int a,int b){
        for (int i =a;i<b+1;i++){ 
            if(i%7==0){
                cout<<i<<endl;

            }
        
        }
    }
};


int main(){
    Solution c;
    c.isdivisible(1,35);
    return 0;
}
