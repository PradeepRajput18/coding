


// Plus One google interview question






class Solution {
public:
    vector<int> plusOne(vector<int>& A) {
      int n=A.size()-1;
      stack <int> s;
      int c=1;
      int i=0;
      while(i<=n && A[i]==0){
          i++;
          n--;
      }
      A.erase(A.begin(),A.begin()+i);
      while(n>=0){
          int k=A[n]+c;
          if(k==10){
              A[n]=0;
              c=1;
          }else{
              A[n]=k;
              c=0;
          }
          n--;
      }
      if(c==1){
          A.insert(A.begin(),1);
      }
      return A;
    }
};
