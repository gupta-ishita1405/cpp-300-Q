#include<iostream>
#include<string>
using namespace std;
class Solution{
    public:
    string isTriangle(int a , int b, int c){
        if(a+b>c && a+c>b && b+c>a){
            return "Triangle";
        }
        else{
            return "not";
        }
    }
};


int main(){
    Solution c;
    cout<<c.isTriangle(2,3,4)<<'\n';
    return 0;
}