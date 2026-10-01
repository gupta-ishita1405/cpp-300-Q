#include <iostream>
#include<string>
using namespace std;
class Solution{
    public:
    string ismedian(int a ,int b,int c){
        if((a>b &&b>c) || (a<b && c>b)){
            return"b";
        }
        else if((b>a && c<a)||(b<a && c>a)){
            return "a";
        }
        else{
            return "c";
        }
    }
};

int main(){
    Solution c;
    cout<<c.ismedian(2,3,4);
    return 0;
}