#include <iostream>
#include<string>
using namespace std;
class Solution{
    public:
    string isDivisible(int n){
        if(n%5==0 && n%3==0){
            return "FizzBuzz";
        }
        else if(n%3==0){
            return"Fizz";
        }
        else{
        return"Buzz";
        }
    }
};

int main(){
    Solution c;
    int n;
    cout<<"enter a number:- "<<endl;
    cin>>n;
    cout<<c.isDivisible(n)<<"\n";
    return 0;
}
