#include<iostream>
using namespace std;

class Node{
	protected:
		int val;
		Node* next;
};

class Link:public Node{
	Node* first;
	public:
	Link(){first=nullptr;}
	Node* getNode(){return first;}
	void create(int A[],int n);
	void display();
};

void Link::create(int A[], int n){
	Node* temp, *newnode;
	
	first=new Node;
	first->val=A[0];
	first->next=NULL;
	temp=first;
	
	for(int i=1;i<n;i++){
		newnode=new Node;
		newnode->val=A[i];
		newnode->next=nullptr;
		temp->next=newnode;
		temp=newnode;
	}
}

void Link::display(){
	Node *p=first;
	while(p){
		cout<<p->val<<"->";
		p=p->next;
	}
	cout<<"NULL"<<endl;
	
}
