#include<iostream>
#include"Node.h"
using namespace std;

int Link::max(){
   Node* p=first;
   int max=INT32_MIN;
   while(p){
   	if(max<p->val)
   		max=p->val;
   	
   	p=p->next;
   }
   return max;

}
int Link::rMax(Node* p){
	int x=0;
	if(!p)
		return INT32_MIN;
	else{
		x=rMax(p->next);
		
		return x < p->val ? p->val : x ;
			
	}
	
	
}
int Link::min(){
	Node* p=first;
	int min=INT32_MAX;
	while(p){
		if(min>p->val)
			min=p->val;
		p=p->next;
	}
	return min;
}
int Link::rMin(Node* p){
	int x=0;
	if(!p)
		return INT32_MAX;
	else{
		x=rMin(p->next);
		return x>p->val ? p->val : x;
	}
}


int main(){
	int A[]={11,22,99,4234,12};
	int len=sizeof(A)/sizeof(A[0]);
	Link l;
	l.create(A,len);
	cout<<"Max Element: "<<l.max()<<endl;
	cout<<"Rmax Element: "<<l.rMax(l.getNode())<<endl;
	cout<<"Min Element: "<<l.min()<<endl;
	cout<<"Rmin Element: "<<l.rMin(l.getNode())<<endl;
	return 0;
}


