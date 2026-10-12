#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class solution{
    public:
    int isfirstoccurance(vector<int> &arr,int n,int x){
        int i;
        int position=0;
        for(i=0;i<n;i++){
            if(arr[i]==x){
                position=i;
                break;
            }
        }
        cout<<position<<endl;
    }

};

int main(){
    solution c;
    vector<int> arr={1,3,5,6,7,8,2,4,5,6,9};
    // sort(arr.begin(),arr.end());
    int n=arr.size();
    int x;
    cout<<"target value";
    cin>>x;
    c.isfirstoccurance(arr,n,x);

    return 0 ;
}