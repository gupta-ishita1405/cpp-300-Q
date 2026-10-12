#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>


using namespace std;
class solution {
    public: void islargest(vector < int > & arr, int n) {
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sort(arr.begin(),arr.end());
        int largest=arr[n-1];
        int SecoundL=-1;
        for (int i =n-2;i>=0;i--){
            if(largest!=arr[i]){
                SecoundL=arr[i];
                break;
            }
        }
        cout<<SecoundL;
        
    }
};

int main() {
    solution c;
    int n;
    cin >> n;
    vector < int > arr(n);
    c.islargest(arr, n);
    return 0;
}
