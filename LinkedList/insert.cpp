#include<iostream>
#include"Node.h"
using namespace std;
void Link::insert(int pos, int x){
	Node* newnode,*p=first;
	if(pos < 0 || pos > countNode()){
		return ;
	}
	newnode=new Node;
	newnode->val=x;
	if(pos==0){
		newnode->next=first;
		first=newnode;
	}
	else{
		for(int i=0;i<pos-1;i++){
			p=p->next;
		}
		
		newnode->next=p->next;
		p->next=newnode;
		
	}
}

void Link::insertLast(int x){
	Node* newnode,*temp;
	newnode=new Node;
	newnode->val=x;
	newnode->next=NULL;
	if(first==0){
		first=temp=newnode;
	}
	else{
		temp->next=newnode;
		temp=newnode;
	}
}

void Link::sortedInsert(int x){
	Node* newnode,*p=first,*q=NULL;
	newnode=new Node;
	newnode->val=x;
	newnode->next=nullptr;
	if(first==NULL){
		first=newnode;
	}
	else{
		while(p && p->val<x){
			q=p;
			p=p->next;
		}
		
		if(p==first){
			newnode->next=first;
			first=newnode;
		}
		else{
			newnode->next=q->next;
			q->next=newnode;
		}
	}
}

int main(){
	int A[]={11,22,33,44,55,66};
	int len=sizeof(A)/sizeof(A[0]);
	Link l,m;
	l.create(A,len);
	l.display();
	l.sortedInsert(45);
	l.insert(4,99);
	m.insertLast(99);
	m.insertLast(88);
	m.sortedInsert(23);
	m.display();
	cout<<"After inserting 99 at 4th position"<<endl;
	l.display();

	return 0;

}
