#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class solution{
    public:
    void islargest( vector <int> &arr,int n){
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int largest=0;
        for (int i=0;i<n;i++){
            if(arr[i]>largest){
                largest=arr[i];
            }
            
        }
        cout<<largest;

    }
};

int main(){
    solution c;
    int n;
    cout<<"enter";
    cin>>n;
    vector<int> arr(n);
    c.islargest(arr,n);
    return 0;
}
