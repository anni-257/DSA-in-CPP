#include<iostream>
#include"Node.h"
using namespace std;

void Link::sortedInsert(int x){
	Node* p=first;
	Node* q=NULL;
	Node* newnode=new Node;
	newnode->val=x;
	newnode->next=NULL;
	
	if(p==0){
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
			newnode->next=p;
			q->next=newnode;
		}
	}
}

int main(){
	
	int A[]={11,22,33,44,55,66,77,88,99};
	int len=sizeof(A)/sizeof(A[0]);
	Link l;
	l.create(A,len);
	l.display();
	l.sortedInsert(34);
	l.sortedInsert(67);
	l.display();
	
	return 0;
}
