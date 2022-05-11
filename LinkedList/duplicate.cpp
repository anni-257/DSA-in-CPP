#include<iostream>
#include"Node.h"
using namespace std;

void Link::removeDuplicate(){
	Node* p=first;
	Node* q=first->next;
	
	while(q){
	
		if(p->val!=q->val){
			p=q;
			q=q->next;
		}
		else{
			p->next=q->next;
			delete q;
			q=p->next;
		}
	}
	

}

int main(){
	int A[]={11,22,33,33,33,44,55,66,77,77,88,88};
	int len=sizeof(A)/sizeof(A[0]);
	Link l;
	l.create(A,len);
	l.display();
	l.removeDuplicate();
	cout<<"After Removing Duplicates"<<endl;
	l.display();
	return 0;
}
