// remove duplicate
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class solution {
    public:
    int isunique(vector<int> &arr,int n){
        int i=0;
        for(int j=1;j<n;j++){
            if(arr[i]!=arr[j]){
                arr[i+1]=arr[j];
                i++;
            }
        }
        return (i+1);

    }
};


int main(){
    vector<int> arr={1,1,2,2,3,4,4,5,5,2,3,8,4,6};
    sort(arr.begin(), arr.end());
    int n=arr.size();
    solution c;
    cout<<c.isunique(arr,n);

    return 0;
}