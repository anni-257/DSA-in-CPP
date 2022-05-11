#include<iostream>
#include"Node.h"
using namespace std;
Node* Link::search(int x){
	Node* p=first;
	
	while(p){
		if(x==p->val)
			return p;
		p=p->next;
	}
	
	return NULL;
}

Node* Link::rSearch(Node* p,int x){

	if(!p){
		return NULL;
	}
	
	else if(x==p->val)
		return p;
		
	return rSearch(p->next,x);
}

Node* Link::improveSearch(int x){
	Node* q=nullptr;
	Node* p=first;
	
	while(p){
	
		if(first->val==x)
			return p;
			
		else if(p->val==x){
			q->next=p->next;
			p->next=first;
			first=p;
			return p;
		}
		
		else{
			q=p;
			p=p->next;
		}
	}
	
	return NULL;
}

int main(){
	int A[]={11,22,33,44,55};
	int len=sizeof(A)/sizeof(A[0]);
	Link l;
	l.create(A,len);
	l.display();
	cout<<"Iterative position of 33 "<<l.search(33)<<endl;
	cout<<"recursive position of 33 "<<l.rSearch(l.getNode(),33)<<endl;
	cout<<"Improve Position of 33 "<<l.improveSearch(33)<<endl;
	return 0;
}
