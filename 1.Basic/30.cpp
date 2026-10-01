#include <iostream>
#include<string>

using namespace std;
class Solution{
    public:
    string isperfectsq(int n){
        if(n == 1 || n == 4 || n == 9 ||
            n == 16 || n == 25 ||
            n == 36 || n == 49 ||
            n == 64 || n == 81 ||
            n == 100){
                return "perfect square";
            }
        else{
            return "not a perfect square";
        }

    }

};


int main(){
    Solution c;
    cout<<c.isperfectsq(35)<<endl;
    return 0;
}
