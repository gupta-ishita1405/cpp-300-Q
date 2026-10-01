#include<iostream>
#include<string>
using namespace std;
class Solution{
    public:
    string isday(int n){
        if(n>12 && n<16){
            return to_string(n)+"pm Good Afternoon";
        }
        else if(n>16 && n<21){
            return to_string(n)+"pm Good Evening";
        }
        else if(n>21 && n<4){
            return to_string(n)+"am Good Night";
        }
        else{
            return to_string(n)+"am Good Morning";
        }
    }
};


int main(){
    Solution c;
    cout<<c.isday(15)<<"\n";
    return 0;
}