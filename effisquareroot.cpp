#include<iostream>
#include<cmath>
int newtonrapsions(unsigned int ,short);


int newtonrapsions(unsigned int a,short n){
	double p=pow(10,-10);
	double r=a;
	std::cout<<p<<std::endl;
	short c=10;
	while(c)
	{
		std::cout<<"yes"<<r<<"no"<<c<<std::endl;
		r=(r+a/r)/n;
		c-=1;
	}
	std::cout<<r<<std::endl;
	return int(r);
}

int main(){
//	unsigned int c= 4294967295;
	unsigned int c= 4294967294;
//	std::cin>>c;
	short power=2;
	std::cout<<newtonrapsions(c,power)<<std::endl;
}
