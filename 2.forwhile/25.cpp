#include <iostream>
#include<string>
using namespace std;
class Solution{
    public:
    int issqt(int n){
        for (int i =1;i<n;i++){
                if(n%i==0){
                    cout<<i<<endl;
                }
        }
        
    }
};


int main(){
    Solution c;
    c.issqt(6);
    return 0;
}
