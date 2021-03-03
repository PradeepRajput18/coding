class Solution {
public:
    int climbStairs(int n) {
      if (n==0 || n==1) return n;
      int x=1,y=2;
      for(int i=3;i<=n;i++){
          int c=x+y;
          x=y;
          y=(c);
      }
      return (int)y;
    }
};
