#include<iostream>
#include<string>

using namespace std;
class Solution{
    public:
    string isequal(int n){
        int a=n%10;
        int m=(n/100)%10;
        int t=(n/10)%10;
        int l=n/1000;
        
        int sum = a+m+t+l;
        int product =a*m*l*t;
        if(sum>product){
            return to_string(sum) +"Sum is greater"+ to_string(product);
        }
        else{
            return "Product is greater";
        }
    }

};


int main(){
    Solution c;
    cout<<c.isequal(1234);
    return 0;
}
