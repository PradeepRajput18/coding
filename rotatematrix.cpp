#include<iostream>
using std::cout;
using std::endl;
#include <iomanip>

int main(){
	short a[3][3] = {  
   {0, 1, 2} ,
   {4, 5, 6} ,  
   {8, 9, 10}   
   };
   short m= sizeof(a)/sizeof(a[0]);
   short n= sizeof(a[0])/sizeof(short);
   if(m!=n){
	   m=m+n;
	   n=m-n;
	   m=m-n;
   } 
   for(short i=m-1;i>=0;i--){
   	 for(short j=0;j<n;j++){
   	 	   cout<<a[j][i]<<"\t";
		}
		cout<<endl;
   }
}
