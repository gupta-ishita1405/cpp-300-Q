#include<iostream>
using namespace std;
class Solution{
    public:
    void isprint(int i , int n){
        if(i>n){
            return;
        }
        cout<<i<<endl;
        isprint(i+1,n);
    }
};

int main(){
    Solution c;
    int n;
    cout<<"enter:-";
    cin>>n;
    c.isprint(1,n);
    return 0;
}