#include <iostream>
#include<string>
using namespace std;
class Solution{
    public:
    string isQuadrant(int x,int y){
        if(x>0 &&y>0){
            return "I Quadrant";
        }
        else if(x<0 &&y<0){
            return "III Quadrant";
        } 
        else if(x<0 && y>0){
            return "II Quadrant";
        }
        else if(x==0 &&y==0){
            return" origin";
        }
        else{
            return"IV Quadrant";
        }
    }

};


int main(){
    Solution c;
    cout<<c.isQuadrant(-3,2)<<endl;
    return 0;
}