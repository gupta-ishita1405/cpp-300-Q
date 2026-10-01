#include <iostream>
#include<string>
using namespace std;
class Solution{
    public:
    int isangle(int hours, int minutes){
        int hourAngle = (hours % 12) * 30 + minutes * 0.5;
        int minuteAngle = minutes * 6;
        int angle = abs(hourAngle - minuteAngle);
        if (angle > 180){
            angle = 360 - angle;
            return angle ; 
        }
    }

};


int main(){
    Solution c;
    cout<<c.isangle(14,56);
    return 0;
}
