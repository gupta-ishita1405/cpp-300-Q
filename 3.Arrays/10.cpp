#include <iostream>
using namespace std;

class solution{
    public:
    void istarget(int arr[],int n,int x){
        int i;
        for (i=0;i<n;i++){
            cin>>arr[i];
        }
        for (i=0;i<n;i++){
            if(x < arr[i]){
                cout<<arr[i]<<endl;
            }
        }
        
    }
};

int main (){
    solution c;
    int n;
    cout<<"enter a elemnt no.;-";
    cin>>n;
    int x;
    cout<<"enter a  target elemnt no.;-";
    cin>>x;
    int arr[n];
    c.istarget(arr,n,x);
    

    return 0;
}