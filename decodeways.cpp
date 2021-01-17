// I had found this question from facebook leetcode and I had not done this by own but inspired from Yellow_jack 

// I had found intresting tricks and ideas from this code 


#include<iostream>
#include<bits/stdc++.h>
using std::cout;
using std::endl;
int numDecodings(char *s,int x) {
        int m1 = x==1 ? 0 : 1, m2 = 1;
//		int m1 = s.back()=='0' ? 0 : 1, m2 = 1;
        for (int i = x-2; i >= 0; i--) {
            int cur;
// 		if zero then return zero cases 
            if (s[i] == '0'){
            	cur = 0;
			}
// 		check is number is from 1 or from 21 to 26 combination
            else if (s[i] == '1' || (s[i] == '2' && s[i+1]-'0'<= 6)){
                     	cur = m1 + m2;
			} 
// 		if number is from 2 to 19
            else{
            	 cur = m1;
			}
            m2 = m1;
            m1 = cur;
   }
   
   return m1;
}

int main(){
	char pradeep[] = "12345"; 
    int n = strlen(pradeep); 
	cout<<"total number of ways to decode is:"<<numDecodings(pradeep,n)<<endl;
}
