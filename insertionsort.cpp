#include<iostream>
using std::cout;
using std::endl;
void print(short *a,short n){
	cout<<"Values of sorted are:"<<endl;
	for(int i=0;i<n;i++){
		cout<<a[i]<<endl;
	}
}

void insertionsort(short *a,short n){
	for(int i=1;i<n;i++){
		short key=a[i];
		short j=i-1;
		while(j>=0 and a[j]>key){
			a[j+1]=a[j];
			j-=1;
		}
		a[j+1]=key;
	}
}

int main(){
	short a[]={2,3,5,1,6,-6,108,78,99,9,22,77,01,20,40,22,2,1,0,4,5,6,-2000,200,10};
	short n=sizeof(a)/sizeof(a[0]);
	insertionsort(a,n);
	print(a,n);
	return 0;
}


