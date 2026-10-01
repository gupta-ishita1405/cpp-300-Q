#include<iostream>
#include<string>
using namespace std;
class Solution{
    public:
    string isliesalphabet(char c){
        if(c>='a' && c<='m'|| c>='A' && c<='M'){
            return "lies between a and m";
        }
        else if(c>='n' && c<='z'|| c>='N' && c<='Z'){
            return "lies between n and z";
        }
    }
};
int main(){
    Solution c;
    cout<<c.isliesalphabet('u')<<"\n";
    return 0;
}