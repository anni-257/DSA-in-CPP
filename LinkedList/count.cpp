#include<iostream>
#include"Node.h"
using namespace std;

int Link::countNode(){
	Node*p=first;
	int cnt=0;
	while(p){
		cnt++;
		p=p->next;
	}
	return cnt;
}

int Link::rCountNode(Node* p){
	if(p){
		return rCountNode(p->next)+1;
	}
	return 0;
}

int main(){
	int A[]={11,22,33};
	int length=sizeof(A)/sizeof(A[0]);
	Link l;
	l.create(A,length);
	l.display();
	cout<<"Number of Nodes: "<<l.countNode()<<endl;
	cout<<"Number of recursive Nodes: "<<l.rCountNode(l.getNode())<<endl;
	return 0;
}
