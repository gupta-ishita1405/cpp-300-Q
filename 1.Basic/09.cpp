#include<iostream>
#include<string>
using namespace std;
class Solution{
    public:
    string isCharacter(char c){
        if(c == 'a' ||c == 'e' ||c == 'i' ||c == 'u'||c == 'o'|| c == 'A' ||c == 'E' ||c == 'I' ||c == 'U'||c == 'O'){
            return "vowel";
        }
        else{
            return "consonant";
        }
    }
};

int main(){
    Solution c;
    cout<<c.isCharacter('J')<<"\n";
    return 0;
}