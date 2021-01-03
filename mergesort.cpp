#include<iostream>
using std::cout;
using std::endl;

void merge(short a[],short low,int mid,short high){
	short i,j,k,c[high+1];
	i=low;
	j=mid+1;
	k=low;
	while(i<=mid && j<=high){
		if(a[i]<a[j]){
			c[k]=a[i];
			k+=1;
			i+=1;
		}else{
			c[k]=a[j];
			k+=1;
			j+=1;
		}
	}
	
	while (i <= mid) {
        c[k] = a[i];
        k++;
        i++;
    }
    while (j <= high) {
        c[k] = a[j];
        k++;
        j++;
    }
    for (i = low; i < k; i++)  {
        a[i] = c[i];
    }
}


void printarray(short a[],short n){
	for(short i=0;i<n;i++){
		cout<<a[i]<<endl;
	}
}

void mergesort(short a[],short low,short high){
	if(low<high){
		int mid=(low+high)/2;
        mergesort(a,low,mid);
        mergesort(a,mid+1,high);
		merge(a,low,mid,high);
	}
}


int main(){
	short a[]={-7,9,0,3,4,22,3,10,34,23,80,1,1,3,5,22,0};
	short n=sizeof(a)/sizeof(a[0]);
	mergesort(a,0,n-1);
	cout<<"sorted array by using merge sort:"<<endl;
	printarray(a,n);
}
