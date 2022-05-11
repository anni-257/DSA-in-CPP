#include<iostream>
using namespace std;

class Node{
	public:
	int val;
	Node* next;
};

class Link:public Node{
	Node* first;
	public:
	Link(){first=nullptr;}
	Node* getNode(){return first;}
	void create(int *A, int n);
	void display();
	void rDisplay(Node*);
	int countNode();
	int rCountNode(Node*);
	int sum();
	int rSum(Node*);
	int max();
	int rMax(Node*);
	int min();
	int rMin(Node*);
	Node* search(int key);
	Node* rSearch(Node*,int key);
	Node* improveSearch(int key);
	void insert(int index,int x);
	void insertLast(int x);
	void sortedInsert(int x);
	int Delete(int index);
	void removeDuplicate();
	void reverseLink();
	void slidingPtrReverse();
	void rReverse(Node*);
	void concate(Node* q);
	Node* merge(Node* q);
	bool isLoop();
	void circularDisplay();
	void RCircularDisplay(Node*);
	void insertCircular(int index, int x);
	int circularLength();
	void deleteCircularElement();
	void doublyCreate(int *A, int n);
	void doublyInsert(int index, int x);
	int deleteDoublyLink(int index);
	void doublyDisplay();
	void reverseDoubly();
	void displayReverseDoubly();
	void insertCircularDoublyLink();
	int doublyCircularCount();
};

void Link::create(int *A, int n){
	Node* newnode, *temp;
	if(n){
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
}

void Link::display(){
	Node* p=first;
	while(p){
		cout<<p->val<<"->";
		p=p->next;
	}
	cout<<"NULL"<<endl;
	
}

int Link::countNode(){
	int cnt=0;
	Node* p=first;
	
	while(p){
		cnt++;
		p=p->next;
	}
	return cnt;
}
