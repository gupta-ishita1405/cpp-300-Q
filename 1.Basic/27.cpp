#include <iostream>
#include<string>
using namespace std;
class Solution{
    public:
    string iscurrency(int n){
        if(n%100==0){
            return"evenly divided";
        }
        else{
            return"not";
        }
    }

};


int main(){
    Solution c;
    cout<<c.iscurrency(2300)<<endl;
    return 0;
}

