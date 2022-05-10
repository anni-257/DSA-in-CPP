#include<iostream>
#include"Node.h"
using namespace std;
int Link::sum(){
	Node* p=first;
	int sum=0;
	while(p){
		sum+=p->val;
		p=p->next;
	}
	return sum;
}

int Link:: rSum(Node* p){
	if(p){
		return rSum(p->next)+p->val;
	}
	return 0;
}
int main(){
	int A[]={11,22,33,44,55};
	int len=sizeof(A)/sizeof(A[0]);
	Link l;
	l.create(A,len);
	l.display();
	cout<<"Sum Iterative: "<<l.sum()<<endl;
	cout<<"Sum Recursive: "<<l.rSum(l.getNode())<<endl;
	return 0;
}
