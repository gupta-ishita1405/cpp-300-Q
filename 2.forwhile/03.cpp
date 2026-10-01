#include<iostream>
using namespace std;
class Solution{
    public:
    int iseven(int n){
        for(int i=0; i<n;i++){
            if(i%2!=0){
                cout << i<<endl;
            }
        }
    }
};

int main(){
    Solution c;
    c.iseven(100);
    return 0;
}