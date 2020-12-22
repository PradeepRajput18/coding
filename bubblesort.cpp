//  bubble sort which is done in cpp using functions here I had said effi compared to normal bubble sort as it reduces steps as you can see by keeping swaps flag to check if any swaps are over or not
// if not then break the loop so it reduces steps

//  I had used short beacuse I had used only short range integers If you want you can change it to int. I had done it in memory concern and concept purpose of usage of short









#include<iostream>
using std::cout;
using std::endl;
void print(short *a,short n){
	cout<<"Values of sorted are:"<<endl;
	for(int i=0;i<n;i++){
		cout<<a[i]<<endl;
	}
}

void swap(short &a,short &b){
	a=a+b;
	b=a-b;
	a=a-b;
}

void bubblesort(short *a,short n){
	bool swaps=false;
	for(int i=0;i<n;i++){
		swaps=true;
		for(int j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				swap(a[j],a[j+1]);
				swaps=false;
			}
		}
		if(swaps){
			break;
		}
	}
}

int main(){
	short a[]={2,3,5,1,6,-6,108,78,99,9,22,77,01,20,40,22,2,1,0,4,5,6,-2000};
	short n=sizeof(a)/sizeof(a[0]);
	bubblesort(a,n);
	print(a,n);
	return 0;
}


