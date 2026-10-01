#include <iostream>
#include<string>
using namespace std;
class Solution{
    public:
    string isperfect(int n){
        int m=n;
        int sum=0;
        for (int i=1;i<n;i++){
            if(n%i ==0){
                sum +=i;
            }
        cout<<i<<endl;
        
        }
        if (sum==m){
            return "perfect number";

        }
        else{
            return "not";
        }
        
    }
};


int main(){
    Solution c;
    cout<<c.isperfect(100);
    return 0;
}
