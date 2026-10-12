//second largest and smallest

#include <iostream> 
#include <climits>
#include<vector>  
using namespace std;
class solution{
    public:
    int issecoundlargest(vector<int> &a,int n){
        int largest= a[0];
        int slargest=-1;
        for(int i=0;i<n;i++){
            if(a[i]>largest){
                slargest=largest;
                largest=a[i];
            }
            else if(a[i]<largest && a[i]>slargest){
                slargest=a[i];

            }
            
        }
        return slargest;
    }

    int issecoundsmallest(vector<int> &a,int n){
        int smallest=a[0];
        int ssmallest=INT_MAX;
        for(int i=0;i<n;i++){
            if(a[i]<smallest){
                ssmallest=smallest;
                smallest=a[i];
            }
            else if(a[i]!=smallest && a[i]<ssmallest){
                ssmallest=a[i];
            }
        }
        return ssmallest;
    }
    
    
};

int main(){
    vector<int> a={2,3,4,5,6};
    int n=a.size();
    solution c;

    int slargest=c.issecoundlargest(a,n);
    int ssmallest=c.issecoundsmallest(a,n);
    cout << "Second largest: " << slargest << endl;
    cout << "Second smallest: " << ssmallest << endl;

    return 0;

}