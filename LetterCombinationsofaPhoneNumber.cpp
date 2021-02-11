// I had inspired solution from backtoback steve. this is a great question regarding back tracking. I had found answer code is similar to trie data structure.

class Solution {
public:
    void ways(string digit,string temp,vector<string>& answerlist,vector<string>& dailpad,int index){
        if(index==digit.length()){
            answerlist.push_back(temp);
            return;
        }
        
        for(int i=0;i<dailpad[digit[index]-'0'-1].length();i++){
            // temp.push_back(dailpad[digit[index]-'0'-1][i]);
            temp+=dailpad[digit[index]-'0'-1][i];
            ways(digit,temp,answerlist,dailpad,index+1);
            temp.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        if(digits.length()==0){
            return {};
        }
        vector<string>dailpad={"","abc","def","ghi","jkl","mno","prqs","tuv","wxyz"},answerlist;
        
        ways(digits,"",answerlist,dailpad,0);
        return answerlist;
    }
};
