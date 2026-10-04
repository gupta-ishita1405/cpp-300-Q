#include<iostream>
using namespace std;

class Solution{
    public:
    void ispower(int n,int x,int ans){
        if(x<1){
            cout<<ans;
            return ;
        }
        ispower(n,x-1,ans*n);
    }
};

int main(){
    Solution c;
    int n;
    cout<<"enter a number;-";
    cin>>n;
    int x;
    cout<<"enter power;-";
    cin>>x;
    c.ispower(n,x,1);
    return 0;
}