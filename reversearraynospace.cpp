// reversing a array without using any extra space it is easy but I had done for knowing how parameters are passed and reference address are used I had done it in swap function





#include<iostream>
using std::cout;
using std::endl;
short swap(short *a,short *b){
	*a=*a+*b;
	*b=*a-*b;
	*a=*a-*b;
}

int main(){
	short a[10]={1,2,3,4,5,6,7,8,9,10};
	short j=sizeof(a)/sizeof(a[0])-1;
	short i=0;
	while(i<j){
		cout<<a[i]<<"value"<<a[j]<<endl;
		swap(&a[i],&a[j]);
		i+=1;
		j-=1;
	}
	i=0;
	while(i<(sizeof(a)/sizeof(a[0]))){
		cout<<a[i]<<"\t";
		i++;
	}
}
