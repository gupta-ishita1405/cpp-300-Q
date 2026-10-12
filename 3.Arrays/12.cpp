#include<iostream>
using namespace std;

class solution {
    public:
    void iscount(int arr[],int n,int x){
        int count=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n+1;i++){
            if(arr[i]==x){
                count +=1;
            }
        }
        cout<<"target value count is:"<<count<<endl;

    }
};

int main(){
    solution c;
    int n;
    cout <<"enter;-";
    cin>>n;
    int arr[n];
    int x;
    cout<<"target value;-";
    cin>>x;
    c.iscount(arr,n,x);
    return 0;
}