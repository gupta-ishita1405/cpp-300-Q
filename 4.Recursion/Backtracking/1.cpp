#include<iostream>
using namespace std;

class Solution{
    public:
    void isprint(int i, int n){
        if(i<1){
            return;
        }
        isprint(i-1,n);
        cout<<i<<endl;
    }
};

int main(){
    Solution c;
    int n;
    cout<<"enter n;-";
    cin>>n;
    c.isprint(n,n);
    return 0;
}