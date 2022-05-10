#include<iostream>
#include"Node.h"
using namespace std;

void Link::display(){
	Node* p=first;
	while(p){
		cout<<p->val<<"->";
		p=p->next;
	}
	cout<<"NULL"<<endl;
}

void Link::rDisplay(Node* p){
	if(p){
		cout<<p->val<<"->";
		rDisplay(p->next);
	}
	
	else
		cout<<"NULL"<<endl;
}
int main(){

	int A[]={11,22,33,44,55,66,77};
	int length=sizeof(A)/sizeof(A[0]);
	Link l;
	l.create(A,length);
	l.display();
	l.rDisplay(l.getNode());
	return 0;

}
