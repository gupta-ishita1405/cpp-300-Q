#include <iostream>
using namespace std;

class Solution{
    public:
    void issum(int arr[],int n){
        int sum=0;
        int i;
        for (i=0;i<n;i++){
            cin>>arr[i];
        }
        for (i=0;i<n+1;i++){
            sum=sum+i;   
        }
        cout<<sum<<endl;

    }

};


int main (){
    Solution c;
    int n;
    cout<<"enter a element no.;-";
    cin>>n;
    int arr[n];
    c.issum(arr,n);
    return 0;
}