#include<iostream>
using namespace std;

class Solution{
    public:
    void isprint(int arr[], int n){
        for (int i=0;i<n;i++){
            cin>>arr[i];
        }
        for (int i=0;i<n;i++){
            cout<<arr[i]<<endl;
        }
    }
};

int main(){
    Solution c;
    int n;
    cout<<"enter the number of array elements;-";
    cin>>n;
    int arr[n];
    c.isprint(arr,n);
    return 0;
}