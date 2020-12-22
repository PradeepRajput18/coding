// Insertion sort all selection bubble insertion are quadratic sorts so it is better to use insertion sort in case if you use want to use best of thses three selection
// sort is worest of all
//  second place is bubble sort and first is insertion sort 
//  the thing which makes insertion sort best of bubble is which reduces some swap cases compared to bubble sort 

//  I had inspired code from greeks from greeks and learnt it because I though How could you insert a element in between a array so I had seen it 


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


