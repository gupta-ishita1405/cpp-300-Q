using namespace std;
class solution{
    public:
    void islargest( vector <int> &arr,int n){
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        cout<<arr[n-2];
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
