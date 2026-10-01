#include <iostream>
#include<string>
using namespace std;
class Solution{
    public:
    void issqt(int n){
        for (int i =1;i<n+1;i++){ 
            if(i*i<=n){
                cout<<i*i<<endl;

            }
        
        }
    }
};


int main(){
    Solution c;
    c.issqt(20);
    return 0;
}
