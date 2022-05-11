#include<iostream>
#include"Node.h"
using namespace std;

void Link::reverseLink(){
	int A[countNode()];
	Node* p=first;
	int i=0;
	while(p){
		A[i++]=p->val;
		p=p->next;
	}
	p=first; i--;
	
	while(p){
		p->val=A[i--];
		p=p->next;
	}
}
int main(){
	int A[]={11,22,33,44,55,66,77,88,99};
	int len=sizeof(A)/sizeof(A[0]);
	Link l;
	l.create(A,len);
	l.display();
	cout<<"After Reversing Elements: "<<endl;
	l.reverseLink();
	l.display();
	
	return 0;
}
