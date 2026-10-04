#include <iostream>
using namespace std;
class solution{
    public:
    void isaverage(int arr[],int n){
        int sum=0;
        int i;
        for (i=0;i<n;i++){
            cin>>arr[i];
        }
        for(i=0;i<n+1;i++){
            sum+= i;
        }
        int average=sum / n;
        cout<<average<<endl;

    }
};


int main(){
    solution c;
    int n;
    cout<<"enter ele no;-";
    cin>>n;
    int arr[n];
    c.isaverage(arr,n);
    return 0;
}