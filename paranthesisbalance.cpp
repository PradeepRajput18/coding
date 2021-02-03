
program to check weather it is balenced or not if balenced return 1 or else return 0 



struct Solution {
  bool paircheck(char open,char close){
      if(open == '(' && close == ')') return true;
      else if(open == '{' && close == '}') return true;
      else if(open == '[' && close == ']') return true;
      return false;
  }
  int isBalanced(string s) {
      int n=s.length();
      stack<char> st;
      for(int i=0;i<n;i++){
            if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
                st.push(s[i]);
            }
            else if(s[i] == ')' || s[i] == '}' || s[i] == ']')
            {
                if(st.empty() || !paircheck(st.top(),s[i]))
                    return 0;
                else
                    st.pop();
            }
      }
      return st.empty()?1:0;
      
  }
};
