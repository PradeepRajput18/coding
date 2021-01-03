#include<iostream>
#include<bits/stdc++.h>
using std::cout;
using std::cin;
using std::endl;
using std::malloc;
using std::free;
struct node{
	int data;
	struct node *next=NULL;
	struct node *back=NULL;
};

typedef struct node *dlink;

int findlength(dlink root){
	short c=0;
	while(root->next!=NULL){
		root=root->next;
		c+=1;
	}
	return c;
}

dlink update(dlink root){
	cout<<"enter positions and number to be inserted in the doubly linked list:"<<endl;
	short len=findlength(root);
	short pos,x;
//	jump:
		cin>>pos;
		cin>>x;
//	if(pos>len || pos<0){
//		cout<<"pls enter valid number or pos is greater than len"<<endl;
//		goto jump;
//	}
	if(pos==1){
		dlink l;
		l=(dlink)malloc(sizeof(struct node));
		l->data=x;
		l->next=root;
		l->back=NULL;
		return l;
	}
	short c=1;
	dlink up=root;
	while(c<pos-1){
		up=up->next;
		c+=1;
	}
	cout<<"yes"<<up->data<<endl;
	dlink l;
	l=(dlink)malloc(sizeof(struct node));
	l->data=x;
	l->next=up->next;
	l->back=up->next->back;
	up->next->back=l;
	up->next=l;
	return root;
	
}

dlink del(dlink root){
	cout<<"enter number to be deleted"<<endl;
	short x;
	cin>>x;
	if(root->data==x){
		dlink k=root->next;
		printf("%d\n",k->data);
		k->back=NULL;
		free(root);
		return k;
	}
    dlink k=root->next;
	while(k!=NULL){
		dlink l=k;
		k=k->next;
		if(k->next==NULL){
			l->next=NULL;
			free(k);
			return root;
		}
		if(k->data==x && k!=NULL){
			dlink u=k->next;
			l->next=u;
			u->back=l;
			free(k);
			return root;
		}
	}
	cout<<"eleemnt is not present"<<endl;
	return root;
}


dlink display(dlink root){
	if(root==NULL){
		cout<<"linked list is empty"; 
	}
	cout<<"starting from begin:"<<endl;
	while(root->next!=NULL){
		cout<<root->data<<endl;
		root=root->next;
	}
	cout<<root->data<<endl;
	cout<<"starting from ending:"<<endl;
	while(root->back!=NULL){
		cout<<root->data<<endl;
		root=root->back;
	}
	cout<<root->data<<endl;
}


dlink insert(dlink root,short x){
	dlink l;
	l=(dlink)malloc(sizeof(struct node));
	l->data=x;
	l->next=NULL;
	l->back=NULL;
	if(root==NULL){
		return l;
	}else{
		dlink k=root;
		while(k->next!=NULL)
		{
			k=k->next;
		}
		k->next=l;
		l->back=k;
		return root;
	}
	
}

int main(){
	short x;
	cout<<"enter value to list"<<endl;
	cin>>x;
	dlink root=NULL;
	while(x!=-1){
		root=insert(root,x);
		cin>>x;
	}
//	root=del(root);
	root=update(root);
	cout<<"yes it has camed"<<endl;
	display(root);
}
