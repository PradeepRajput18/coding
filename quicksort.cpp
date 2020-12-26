#include<iostream>
using std::cout;
using std::endl;

void swap(short *a,short *b){	
	short t = *a;  
    *a = *b;  
    *b = t;
}

short partision(short arr[],short low,short high){
	short pivot=arr[high];
	short i=low-1;
	for(short j=low;j<=high-1;j++){
		if(arr[j]<pivot){
			i+=1;
			swap(&arr[i],&arr[j]);
		}	
	}
	swap(&arr[i + 1], &arr[high]);  
    return (i + 1); 
	
}

void quicksort(short arr[],short low,short high){
	if(low<high)
	{
		short p=partision(arr,low,high);
		quicksort(arr,low,p-1);
		quicksort(arr,p+1,high);
	}
}


void printarray(short a[],short n){
	for(short i=0;i<n;i++){
		cout<<a[i]<<endl;
	}
}


int main(){
	short a[]={-7,9,0,3,4,22,3,10,34,23,80,1,1,3,5,22,0};
	short n=sizeof(a)/sizeof(a[0]);
	quicksort(a,0,n-1);
	cout<<"sorted array by using quick sort:"<<endl;
	printarray(a,n);
}



