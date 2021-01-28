
// here I had not used operators %  I had done it directly 

#include <charconv>
class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> vect;
        short n3=1;
        short n5=1;
        for(short i=1;i<=n;i++){
           string s="";
           if(n3==3){
                s+= "Fizz";
                n3=0;
           }
            if(n5==5)
            {
                s+= "Buzz";
                n5=0;
            }
            if(s== "")s = to_string(i);
            n3+=1;
            n5+=1;
            vect.push_back(s);
        }
        return vect;
    }
};
