#include<iostream>
using namespace std;
class solution{
    public:
    void ismany(int arr[],int n){
        int counteven=0;
        int countodd=0;
        int i;
        for(i=0;i<n;i++){
            cin>>arr[i];
        }
        for(i=0;i<n;i++){
            if(arr[i]%2==0){
                counteven++;
            }
            else{
                countodd++;
            }
        }
        cout<<"even no.;-"<<counteven<<endl;
        cout<<"odd no.;-"<<countodd<<endl;
    }
};

int main()
{
    solution c;
    int n;
    cout<<"enter";
    cin>>n;
    int arr[n];
    c.ismany(arr,n);
    return 0;
}