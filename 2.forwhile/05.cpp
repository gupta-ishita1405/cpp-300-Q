#include <iostream>
#include<string>
using namespace std;
class Solution{
    public:
    int istable(int n){
        for( int i =1; i<=10;i++){
            int r=n*i;
            cout<<n<<" * "<<i<<" = "<<r <<endl;
        }
    }

};


int main(){
    Solution c;
    c.istable(9);
    return 0;
}
