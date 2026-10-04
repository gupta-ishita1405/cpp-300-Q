#include<iostream>
using namespace std;
class Solution {
    public:
    void issum(int i,int sum){
        if(i<1){
            cout<<sum;
            return;
        }
        issum(i-1,sum*i);
    }
};

int main(){
    Solution c;
    int n;
    cout<<"enter;-";
    cin>>n;
    c.issum(n,1);
    return 0;
}