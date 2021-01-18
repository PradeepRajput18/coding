#include<iostream>
using std::cout;
using std::endl;


int  main(){
	int a=5,b=0;
	if((!a)&b){
		cout<<"yes a is less than b"<<endl;
	}
	else if(a&(!b)){
		cout<<"yes b is less than a"<<endl;
	}
	
	if((a && b) || (!a && !b)){
		cout<<"a and b are equal"<<endl;
	}
}
