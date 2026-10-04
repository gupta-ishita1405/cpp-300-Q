#include <iostream>
using namespace std;

class solution{
    public :
    void ismax(int arr[],int n){
        int largest=arr[0];
        int position=0;
        int i;
        for(i=0;i<n;i++){
            cin>>arr[i];
        }
        for(i=0;i<n;i++){
            if(arr[i]>largest){
                largest=arr[i];
                position=i;
            }
        }
        cout<<"position of largest no is"<<position<<endl;

    }
};

int main(){
    solution c;
    int n;
    cout<<"enter;";
    cin>>n;
    int arr[n];
    c.ismax(arr,n);


    return 0;
}