#include <iostream>
#include<string>
using namespace std;
class Solution{
    public:
    string isyear(int n){
        int year=n+100;
        return to_string(year);
    }

};


int main(){
    Solution c;
    cout<<c.isyear(1777);
    return 0;
}
