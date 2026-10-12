// check sorted
#include<iostream>
#include<vector>
using namespace std;

class solution{
    public:
    int isSorted(vector<int> a,int n){
        for (int i =1;i<n;i++){
            if(a[i]>=a[i-1]){
                
                
            }
            else{
                return false;
            }
        }
        return true;

    }
};


int main(){
    vector<int> a={1,2,3,4,5};
    int n=a.size();
    solution c;
    cout<<c.isSorted(a,n)<<endl;
    return 0;

}