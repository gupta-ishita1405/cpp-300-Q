#include<iostream>
#include<string>
using namespace std;
class Solution{
    public:
    string isvalidTriangle(int a,int b ,int c){
        if(a+b>c && a+c>b && b+c>a){
            if(a==b &&b==c){
                return "equilateral";
            }
            else if(a!=b && b!=c){
                return "scalene";
            }
            else{
                return "isosceles";
            }
        }
        else{
            return "not triangle";
        }
    }
};

int main(){
    Solution c;
    cout<<c.isvalidTriangle(1,0,1)<<"\n";
    return 0;
}

