#include<iostream>
using namespace std;

class Node{
	protected:
		int val;
		Node* next;
};

class Stack : protected Node{
	Node* top;
	public:
	Stack(){top=nullptr;}
	void push(int);
	int pop();
	int peek(int);
	int stackTop();
	int isEmpty();
	int isFull();
	
	
};

void Stack::push(int x){
	Node* newnode=new Node;
	if(newnode==NULL){
		cout<<"Stack is OverFlow"<<endl;
	}
	else{
		newnode->val=x;
		newnode->next=top;
		top=newnode;
	}
}

int Stack::pop(){
	Node* temp;
	int x=-1;
	if(!top){
		cout<<"Stack is UnderFlow"<<endl;
	}
	else{
		temp=top;
		top=top->next;
		x=temp->data;
		delete(temp);
	}
	
	return x;
}

int Stack::peek(int pos){
	int x=-1;
	Node* temp=top;
	
}

int main(){
	return 0;
}
