#include<iostream>
#include"Node.h"
using namespace std;


int main(){
	int A[]={11,22,33,44,55,66,77};
	int length=sizeof(A)/sizeof(A[0]);
	Link l;
	l.create(A,length);
	cout<<"Linked List "<<endl;
	l.display();
	return 0;
}
