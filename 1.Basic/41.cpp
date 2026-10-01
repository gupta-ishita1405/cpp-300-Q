#include <iostream>
#include<string>
using namespace std;
class Solution{
    public:
    string isQuadrant(int x,int y){
        if(x==0 &&(y>0||y<0)){
            return "Y-axis";
        }
        else if((x>0 ||x<0)&& y==0){
            return "X-axis";
        } 
        else{
            return "origin";
        }
    }

};


int main(){
    Solution c;
    cout<<c.isQuadrant(-3,0)<<endl;
    return 0;
}