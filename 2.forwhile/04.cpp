#include<iostream>
using namespace std;
class Solution{
    public:
    int isopp(int n){
        for ( int i =n; i>0;i--){
            cout<<i<<endl;

        }
    }
};

int main(){
    Solution c;
    c.isopp(10);
    return 0;
}