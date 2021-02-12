// generate paranthesis solution which is backtracking solution




class Solution {
public:
    void findparanthesis(string paran,int open,int close,vector<string>& v){
        if(open==0 and close==0){
            v.push_back(paran);
            return;
        }
        if(open>0){
            findparanthesis(paran+"(",open-1,close,v);
        }
        if(close>open){
            findparanthesis(paran+")",open,close-1,v);
        }
        
    }
    vector<string> generateParenthesis(int n) {
        vector<string> answer;
        findparanthesis("",n,n,answer);
        return answer;
    }
};
