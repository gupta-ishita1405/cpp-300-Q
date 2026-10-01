#include <iostream>
#include<string>
using namespace std;
class Solution{
    public:
    int isunits(int units){
        if(units<=100){
            units=units*5;
            return units;}
        else if(units<=200){ 
            units=(units*5)+(units-100)*7;
            return units;}

        else{ 
            units=(units*5) + (units*7) + ((units - 200)*9);
            return units;}
    
    }
};

int main(){
    Solution c;
    cout<<c.isunits(24)<<"\n";
    return 0;
}
