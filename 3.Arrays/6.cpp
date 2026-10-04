#include<iostream>
using namespace std;
class solution{
    public:
    void ismany(int arr[],int n){
        int countp=0;
        int countn=0;
        int countz=0;
        int i;
        for (i=0;i<n;i++){
            cin>>arr[i];
        }
        for (i=0;i<n;i++){
            if(arr[i]>0){
                countp+=1;
            }
            else if(arr[i]==0){
                countz+=1;
            }
            else{
                countn+=1;
            }
        }
        cout<<"postive ele;-"<<countp<<endl;
        cout<<"negative ele;-"<<countn<<endl;
        cout<<"zero ele;-"<<countz<<endl;

    }
};

int main(){
    solution c;
    int n;
    cout<<"enter a elemen;-";
    cin>>n;
    int arr[n];
    c.ismany(arr,n);
    return 0;
}