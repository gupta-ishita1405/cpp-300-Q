#include<iostream>
#include<string>
using namespace std;
class Solution{
    public:
    string isweather(int n){
        if(n<10){
            return "cold";
        }
        else if(n>30){
            return "Hot";
        }
        else{
            return "Warm";
        }
    }
};

int main(){
    Solution c;
    cout<<c.isweather(43)<<endl;
    return 0;
}