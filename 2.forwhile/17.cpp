#include<iostream>
using namespace std;
class Solution{
    public:
    int isprime(int n){
        for(int i=1;i<n+1;i++){
            int count=0;
            for (int j=1; j<i+1;j++){
                if(i%j==0){
                    count +=1;

                }
        
            }
            if (count==2)
            {
                cout<<i<<endl;
            }
            
        }
    }
};

int main(){
    Solution c;
    c.isprime(100);
    return 0;
}