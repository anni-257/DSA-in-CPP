#include<iostream>
using namespace std;

class stack{
	int size;
	int top;
	int *A;
	
	public:
	stack(){
		top=-1;
		cout<<"Enter size of stack: ";
		cin>>size;
		A=new int[size];
	}
	
	void push(int x);
	void pop();
	int peek(int);
	int stackTop();
	bool isEmpty();
	bool isFull();
	void display();
};

void stack::push(int x){

	if(isFull())
		cout<<"Stack Overflow"<<endl;
	else{
		A[++top]=x;
	}
}

void stack::display(){
	cout<<"Stack"<<endl;
	for(int i=top;i>=0;i--)
		cout<<A[i]<<" ";
	cout<<endl;
}

bool stack::isFull(){

	if(top==size-1)
		return 1;
	return 0;
}

bool stack::isEmpty(){
	if(top==-1)
		return 1;
	return 0;
}
