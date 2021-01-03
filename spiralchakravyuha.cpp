#include<bits/stdc++.h>
using std::cout;
using std::endl;
short spiral(short m,short n,short a[10][10])
{
    for(int i=n;i<m;i++){
    	for(int j=n;j<m;j++){
    		a[i][j]=0;
		}
	}
	short l=n,k=65,j=0,i=0;;
	short o=m;
	while(i<m){
		while(j<m){
			if(a[i][j]==0){
				a[i][j]=k;
				k++;
			}
			j+=1;
		}
		j-=1;
		while(i<m){
			if(a[i][j]==0){
				a[i][j]=k;
				k++;
			}
			i+=1;
		}
		i-=1;
		while(j>=l){
			if(a[i][j]==0){
				a[i][j]=k;
				k++;
			}
			j-=1;
		}
		j+=1;
		while(i>=l){
			if(a[i][j]==0){
				a[i][j]=k;
				k++;
			}
			i-=1;
		}
		m=m-1;
		l+=1;
		i=j=l;		
	}
	m=o;
    for(int i=n;i<m;i++){
    	for(int j=n;j<m;j++){
    		cout<<char(a[i][j])<<"\t";
		}
		cout<<endl;
	}
}

int main()
{
	short a[10][10];
	spiral(4,0,a);
}
