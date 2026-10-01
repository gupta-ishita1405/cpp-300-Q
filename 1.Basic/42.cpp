#include<iostream>
#include<string>
using namespace std;
class Solution{
    public:
    string ispythas(int a ,int b,int c){
        if  (( (a * a) ==(b * b) + (c * c)) ||( b * b == a * a + c * c )||(c * c == a * a + b * b )){
            return "Pythagorean triplet";
        }
        else{
            return"not";
        }
    }

};


int main(){
    Solution c;
    cout<<c.ispythas(12,13,14);
    return 0;
}
