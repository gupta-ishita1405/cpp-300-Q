#include <iostream>
#include<string>
using namespace std;
class Solution{
    public:
    void iscubes(int n){
        for (int i =1;i<n+1;i++){ 
            if(i*i*i<=n){
                cout<<i*i*i<<endl;

            }
        
        }
    }
};


int main(){
    Solution c;
    c.iscubes(20);
    return 0;
}
