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
        int largest=arr[0];
        int SecoundL=INT_MIN;
        for (int i =0;i<n;i++){
            if(largest<arr[i]){
                SecoundL=largest;
                largest=arr[i];
            }
            else if(largest!=arr[i] && arr[i]>SecoundL){
                SecoundL=arr[i];
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
