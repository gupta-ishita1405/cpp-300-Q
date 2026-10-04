#include<iostream>
using namespace std;

class Solution{
    public:
    void isprint(int i,int n){
        if(i>n){
            return;
        }
        if(i%2!=0){
            cout<<i<<endl;
        }
        isprint(i+1,n);
    }
};

int main(){
    Solution c;
    int n;
    cout<<"enter n;-";
    cin>>n;
    c.isprint(1,n);
    return 0;
}