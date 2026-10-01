#include<iostream>
#include<string>
using namespace std;
class Solution{
    public:
    string isGrade(int n){
        if(n>90 && n<100){
            return "A";
        }
        else if(n>75 && n<90){
            return "B";
        }
        else if(n>60 && n<75){
            return "C";
        }
        else if(n>33 && n<60){
            return "D";
        }
        else{
            return "E";
        }
    }
};

int main(){
    Solution c;
    cout<<c.isGrade(43)<<"\n";
    return 0;
}