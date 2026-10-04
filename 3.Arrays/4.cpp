#include <iostream>
using namespace std;

class Solution{
    public:
    void ismin(int arr[],int n){
        for (int i=0;i<n;i++){
            cin>>arr[i];
        }
        int smallest=arr[9];
        for(int i=0;i<n;i++){
            if(arr[i]<smallest){
                smallest=arr[i];
            }
        }
        cout<<smallest;
    }
};


int main(){
    Solution c;
    int n;
    cout<<"enter a element";
    cin>>n;
    int arr[n];
    c.ismin(arr,n);
    return 0;
}