#include<iostream>
using namespace std;
class Solution{
    public:
    void ismax(int arr[],int n){
        int i;
        for(i=0;i<n;i++){
            cin>>arr[i];
        }
        int largest=arr[0];
        for (int i=0;i<n;i++){
            if (arr[i]>largest){
                largest=arr[i];
            }
        }
        cout<<largest;

    }
};


int main(){
    Solution c;
    int n;
    cout<<"enter a nuumber elements;-";
    cin>>n;
    int arr[n];
    c.ismax(arr,n);
    return 0;
}

