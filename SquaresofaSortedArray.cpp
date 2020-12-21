// in this problem I had been compared elements based on the logic some of from two pointers or quick sort



#include<iostream>
using std::cout;
using std::cin;
using std::endl;

int sqrt(short m)
{
	return m*m;
}

int main(){
	short nums[]={-10000,-9999,-7,-5,0,0,10000};
	short l=0,m=sizeof(nums)/sizeof(nums[0]);
	m=m-1;
	int* a=new int[m];
	short n=m,g=m;
	while(l<=m){
		int f=sqrt(nums[l]);
		int k=sqrt(nums[m]);
		if(f>=k){
			a[n]=f;
			n=n-1;
			l+=1;
		}else{
			a[n]=k;
			n=n-1;
			m-=1;
		}
	}
	for(int i=0;i<=g;i++){
		cout<<a[i]<<"    ";
	}
}
