#include<iostream>
#include<string>
using namespace std;
class Solution{
    public:
    string isprime(int n){
        int count=0;
        for(int i=1;i<n+1;i++){
            if(n%i==0){
                count +=1;
            }
        }
            if (count==2)
            {
               return "prime no";
            }
            else{
                return"not";
            }
            
        
    }
};

int main(){
    Solution c;
    cout<<c.isprime(2);
    return 0;
}