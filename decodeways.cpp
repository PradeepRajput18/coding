#include<iostream>
#include<bits/stdc++.h>
using std::cout;
using std::endl;
int numDecodings(char *s,int x) {
        int m1 = x==1 ? 0 : 1, m2 = 1;
//		int m1 = s.back()=='0' ? 0 : 1, m2 = 1;
        for (int i = x-2; i >= 0; i--) {
            int cur;
            if (s[i] == '0'){
            	cur = 0;
			}
            else if (s[i] == '1' || (s[i] == '2' && s[i+1]-'0'<= 6)){
                     	cur = m1 + m2;
			} 
            else{
            	 cur = m1;
			}
            m2 = m1;
            m1 = cur;
   }
   
   return m1;
}

int main(){
	char digits[] = "12345"; 
    int n = strlen(digits); 
	cout<<numDecodings(digits,n)<<endl;
}
