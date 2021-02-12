class Solution {
public:
    bool isValid(string s) {
        stack<char> p;
        for(auto x:s){
            if(x=='(' or x=='{' or x=='['){
                p.push(x);
            }else{
                if(p.empty())return false;
                if(p.top()=='(' && x==')' || p.top()=='{' && x=='}' || p.top()=='[' && x==']'){
                  p.pop();
                }else{
                    return false;
                }
            }
        }
        return (p.empty());
    }
};
