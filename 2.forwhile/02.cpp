#include<iostream>
using namespace std;
class Solution{
    public:
    int iseven(int n=100){
        for(int i=0; i<n;i++){
            if(i%2==0){
                cout << i<<endl;
            }
        }
    }
};

int main(){
    Solution c;
    cout<<c.iseven();
    return 0;
}