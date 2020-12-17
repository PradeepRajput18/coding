#include<iostream>
using std::cout;
using std::endl;
int kandene(short a[],short);
int kandene(short a[],short n){
    short maximum=-32000;
    short sum=0;
    
    for(int i=0;i<n;i++){
    	sum=sum+a[i];
    	cout<<"yes"<<sum<<maximum<<endl;
    	if(sum>maximum){
    		maximum=sum;
		}
		if(sum<0){
			sum=0;
		}
	}
	
	return maximum;
}



int main(){
    short a[]={-2, -3, 4, -1, -2, 1, 5, -3};
//    short a[]={-1,-2};
    short n= sizeof(a)/sizeof(a[0]);
    short max=kandene(a,n);
    std::cout<<"Maximu contiginous subb array solution using kandenes algoroth:"<<max<<endl;
}
