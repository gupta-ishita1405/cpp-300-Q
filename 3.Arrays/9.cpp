#include <iostream>
using namespace std;

class solution{
    public :
    void ismin(int arr[],int n){
        int smallest=arr[9];
        int position=0;
        int i;
        for(i=0;i<n;i++){
            cin>>arr[i];
        }
        for(i=0;i<n;i++){
            if(arr[i]<smallest){
                smallest=arr[i];
                position=i;
            }
        }
        cout<<"position of smallest no is"<<position<<endl;

    }
};

int main(){
    solution c;
    int n;
    cout<<"enter;";
    cin>>n;
    int arr[n];
    c.ismin(arr,n);


    return 0;
}