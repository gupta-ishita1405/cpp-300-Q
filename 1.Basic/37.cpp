#include<iostream>
#include<string>
using namespace std;
class Solution{
    public:
    string isday(int n){
        switch(n){
            case 1:
            return "Sunday";
            case 2:
            return "Monday";
            case 3:
            return "Tuesday";
            case 4:
            return "Wednesday";
            case 5:
            return "Thursday";
            case 6:
            return "Friday";
            case 7:
            return "Saturday";
            default:
            return "invalid";


        }
    }
};


int main(){
    Solution c;
    cout<<c.isday(4)<<"\n";
    return 0;
}