#include<iostream>
#include"Node.h"
using namespace std;

int Link::Delete(int index){
	int x=-1;Node*p=first,*q;
	if(index<1 || index>countNode()){
		return x;
	}
	else if(index==1){
		
		first=first->next;
		x=p->val;
		delete(p);
	}
	else{
		for(int i=0;i<index-1;i++){
			q=p;
			p=p->next;
		}
		q->next=p->next;
		x=p->val;
		delete(p);
	}
	return x;
}
int main(){
	int A[]={11,22,33,44,55,66,77,88,99};
	int len=sizeof(A)/sizeof(A[0]);
	Link l;
	l.create(A,len);
	l.display();
	cout<<"Deleting 77 from Linked List"<<endl;
	l.Delete(7);
	l.display();
	
	return 0;

}

