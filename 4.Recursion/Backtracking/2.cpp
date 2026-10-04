#include<iostream>
using namespace std;

class Solution{
    public:
    void isprint(int i, int n){
        if(i>n){
            return;
        }
        isprint(i+1,n);
        cout<<i<<endl;
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