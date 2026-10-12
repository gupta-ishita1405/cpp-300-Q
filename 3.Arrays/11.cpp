#include<iostream>
using namespace std;
class solution {
    public:
    void isexist(int arr[],int n,int x){
        int i;
        for(i=0;i<n;i++){
            cin>>arr[i];
        }
        for(i=0;i<n;i++){
            if(arr[i]==x){
                cout<<"target value exist"<<endl;
            }
        }
    }

};


int main(){
    solution c;
    int n;
    cout<<"enter a element no.;-";
    cin>>n;
    int arr[n];
    int x;
    cout<<"target value;-";
    cin>>x;
    c.isexist(arr,n,x);



    return 0;
}