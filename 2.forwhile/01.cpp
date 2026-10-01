#include <iostream>
#include<string>
using namespace std;
class Solution{
    public:
    int isprint(int n){
        for(int i =0;i<n;i++){
            cout<<i<<endl;
        }
    }


};


int main(){
    Solution c;
    cout<<c.isprint(9);
    return 0;
}
