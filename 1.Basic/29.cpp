#include <iostream>
#include<string>
using namespace std;
class Solution{
    public:
    int isthirdangle(int a,int b){
        int t=a+b;
        int third_angle=180 -t;
        return third_angle;
    }

};


int main(){
    Solution c;
    cout<<c.isthirdangle(45,85)<<endl;
    return 0;
}
