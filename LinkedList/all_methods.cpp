#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* next;
};

class DNode{
    public:
    DNode* prev;
    int val;
    DNode* next;
};

class Link{
    Node* first;
    DNode* head;
    public:

    Link(){first=nullptr;head=0;}
	Node* getNode(){return first;} 
	void create(int *A, int n); //done
	void display(); //done
	void rDisplay(Node*); //done
	int countNode(); //done
	int rCountNode(Node*); //done
	int sum(); //done
	int rSum(Node*); //done
	int max(); //done
	int rMax(Node*); //done
	int min(); //done
	int rMin(Node*); //done
    	Node* search(int key); //done
	Node* rSearch(Node*,int key); //done
	Node* improveSearch(int key); //done
	void insert(int index,int x); //done
	void insertLast(int x); //done
	void sortedInsert(int x); //done
	int Delete(int index); //done
	void removeDuplicate(); //done
	void reverseLink(); //done
	void slidingPtrReverse(); //done
	void rReverse(Node*,Node*); //done
	void concate(Node* q); //done
	void merge(Node* q); //done
	bool isLoop(); //done
    	void createLoop(); //done
	void circularDisplay(); //done
	void RCircularDisplay(Node* p); //done
	void insertCircular(int index, int x); //done
	int circularLength(); //done
	void deleteCircularElement(int); //done
	void doublyCreate(int *A, int n); //done
    	int doublyCount(); //done
	void doublyInsert(int index, int x); //done
	int deleteDoublyLink(int index); //done
	void doublyDisplay(); //done
	void reverseDoubly(); //done
	void displayReverseDoubly(); //
    	void createDoublyLoop(); //done
    	void displayDoublyLoop(); //done
	void insertCircularDoublyLink(); //
	int doublyCircularCount(); //done
};

void Link::create(int*A, int n){
    Node* temp,* newnode;
    if(n>0){
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
    cout<<"Linked List"<<endl;
    while(p){
        cout<<p->val<<"->";
        p=p->next;
    }
    cout<<"Null"<<endl;
}


void Link::rDisplay(Node* p){
    if(p){
        cout<<p->val<<"->";
        rDisplay(p->next);
    }
    else{
        cout<<"Null"<<endl;
    }
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

int Link::rCountNode(Node* p){

    if(p){
        rCountNode(p->next)+1;
    }

    return 0;
}

int Link::sum(){
    Node* p=first;
    int sum=0;
    while(p){
        sum+=p->val;
        p=p->next;
    }
    return sum;
}

int Link::rSum(Node* p){
    if(p){
        return rSum(p->next)+p->val;
    }
    return 0;
}

int Link::max(){
    Node* p=first;
    //int max=INT32_MIN;
    int max=p->val;
    int cnt=0;
    while(p->next){
        if(max<p->next->val){
            max=p->next->val;
            cnt++;
        }
        p=p->next;
    }
    cout<<"Count: "<<cnt<<endl;
    return  max;
}

int Link::rMax(Node* p){
    int x=0;
    if(!p){
        return INT32_MIN;
    }
    x=rMax(p->next);

    return x<p->val?p->val:x;
}

int Link::min(){
    Node* p=first;
    int min=p->val;
    while(p->next){
        if(min>p->val){
            min=p->val;
        }
        p=p->next;
    }
    return min;
}

int Link::rMin(Node* p){
    int x=0;
    if(!p){
        return INT32_MAX;
    }
    x=rMin(p->next);

    return x<p->val?x:p->val;    
    
}

Node* Link::search(int key){
    Node* p=first;
    while(p){
        if(key==p->val){
            return p;
        }
    }

    return nullptr;
}

Node* Link::rSearch(Node* p, int key){
    if(p){
        if(key==p->val){
            return p;
        }
       return  rSearch(p->next,key);
    }
    return nullptr;
}

Node* Link::improveSearch(int key){
    Node* p=first,*q=NULL;
    while(p){
        if(first->val==key)
            return p;
        else if(p->val==key){
            q->next=p->next;
            p->next=first;
            first=p;
        }
        else{
            q=p;
            p=p->next;
        }
    }
}

void Link::insert(int index,int x){
    Node* p=first,*newnode;
    if(index<0 || index>countNode()){
        return ;
    }
    newnode=new Node;
    newnode->val=x;
    newnode->next=nullptr;
    if(index==0){
        newnode->next=first;
        first=newnode;
    }
    else{
        for(int i=0;i<index-1;i++){
            p=p->next;
        }
        newnode->next=p->next;
        p->next=newnode;
    }
}

void Link::insertLast(int x){
    Node* temp=first,*newnode;
    newnode=new Node;
    newnode->val=x;
    newnode->next=nullptr;
    if(first==nullptr){
        first=temp=newnode;
    }
    else{
        while(temp->next){
            temp=temp->next;
        }
        temp->next=newnode;
        temp=newnode;
    }
}

void Link::sortedInsert(int x){
    Node* newnode,*p=first;
    newnode=new Node;
    newnode->val=x;
    newnode->next=nullptr;
    if(first==nullptr){
        first=newnode;
    }

    else{

        while(p->next && p->next->val<x){
            p=p->next;
        }

        if(x<first->val){
            newnode->next=first;
            first=newnode;
        }
        else{
            newnode->next=p->next;
            p->next=newnode;
        }
    }
}

int Link::Delete(int index){
    Node* p=first;
    Node* q;
    int x=-1;
    if(index<1 || index>countNode()){
        return x;
    }
    if(index==1){
        x=p->val;
        first=first->next;
        delete p;
        return x;
    }
    
        for(int i=0;i<index-2;i++)
        {
            p=p->next;
        }
        x=p->next->val;
        q=p->next;
        p->next=p->next->next;
        delete q;
        
    
    return x;
}

void Link::removeDuplicate(){
    Node* p=first;
    Node* q=p->next;
    while(q){
        if(p->val==q->val){
            p->next=q->next;
            delete q;
            q=p->next;
        }
        else{
            p=q;
            q=q->next;
        }
    }
}

void Link::reverseLink(){
    int A[countNode()];
    Node* p=first;
    int i=0;
    while(p){
        A[i++]=p->val;
        p=p->next;
    }
    i--,p=first;
    while(p){
        p->val=A[i--];
        p=p->next;
    }
}

void Link::slidingPtrReverse(){
    Node*r=nullptr,*q=0,*p=first;

    while(p){
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    first=q;

}

void Link::rReverse(Node* q,Node* p){
    if(p){
        rReverse(p,p->next);
        p->next=q;
    }
    else{
        first=q;
    }

}

void Link::concate(Node* q){
    Node* p=first;
    while(p->next) p=p->next;
    p->next=q;

}

void Link::merge(Node* second){
    Node* frst=first;
    Node* third=nullptr,*temp;
    if(frst->val<second->val){
        third=temp=frst;
        frst=frst->next;
        temp->next=NULL;

       
    }

    else{
        third=temp=second;
        second=second->next;
        temp->next=nullptr;
        
    }
    while(frst && second){
        if(frst->val<second->val){
            temp->next=frst;
            temp=frst;
            frst=frst->next;
            temp->next=0;
        }
        else{
            temp->next=second;
            temp=second;
            second=second->next;
            temp->next=nullptr;
        }
    }
    if(frst!=NULL){
        temp->next=frst;
    }
    else{
        temp->next=second;
    }

    first=third;
}

bool Link::isLoop(){
    Node* slow,*fast;
    slow=fast=first;
    while(fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            return 1;
        }
    }

    return 0;
}

void Link::createLoop(){
    Node* p=first,*q=first;
    //int n;
    while(p->next){
        p=p->next;
    }
    
   // cout<<"Enter position of link-Loop"<<endl;
   // cin>>n;
   // for(int i=0;i<n-1;i++){
     //   q=q->next;
   // }
    p->next=q;
    first=q; // if not infinity

}

void Link::circularDisplay(){
    Node* p=first;
    if(p==nullptr){
        cout<<"LinkList is Empty"<<endl;
    }
    else{
        cout<<"Circular Linked list"<<endl;
        do{
            cout<<p->val<<"->";
            p=p->next;  
        }while (p!=first);
        cout<<"Head"<<endl;
       
    }
}

void Link::RCircularDisplay(Node * head){
    static int flag=0;
    if(head!= first || flag==0 ){
        flag=1;
        cout<<head->val<<" ";
        RCircularDisplay(head->next);
    }
}

int Link::circularLength(){
    int cnt=0;
    Node* p=first;
    do{
        cnt++;
        p=p->next;
    }while(p!=first);

    return cnt;
}

void Link::insertCircular(int index, int val){

    if(index<0 || index>circularLength()){
        return;
    }

    Node* newnode,*p=first;
    newnode=new Node;
    newnode->val=val;
    newnode->next=nullptr;

    if(first==nullptr){
        first=newnode;
        first->next=first;
    }
    else if(index==0){
        newnode->next=first;
        while(p->next!=first){
            p=p->next;
        }
        p->next=newnode;
        first=newnode; 
    }
    else{
        for(int i=0;i<index-1;i++){
            p=p->next;
        }
        newnode->next=p->next;
        p->next=newnode;
    }
    
    
}
void Link::deleteCircularElement(int index){
    Node* p=first,*q=nullptr;
    if(index<1 || index>circularLength()){
        return;
    }
    
    else if(index==1){
        while(p->next!=first){
            p=p->next;
        }
        if(p==first){
            delete p;
            p=NULL;
        }
        else{
            p->next=first->next;
            delete first;
            first=p->next;
        }
        
    }
    else{
        for(int i=0;i<index-2;i++){
            p=p->next;
        }
        q=p->next;
        p->next=q->next;
        delete q;
        q=nullptr;
    }
}

void Link::doublyCreate(int *A, int len){
    DNode* newnode,*temp;
    head=new DNode;
    head->val=A[0];
    head->prev=head->next=nullptr;
    temp=head;
    for(int i=1;i<len;i++){
        newnode=new DNode;
        newnode->val=A[i];
        newnode->next=nullptr;
        newnode->prev=temp;
        temp->next=newnode;
        temp=newnode;
    }

}

void Link::doublyDisplay(){
    DNode* p=head;

    cout<<"Doubly Linked List"<<endl;
    while(p){
        cout<<p->val<<"<=>";
        p=p->next;
    }
    cout<<"NULL"<<endl;

}

int Link::doublyCount(){
    DNode* p=head;
    int cnt=0;
    while(p){
        cnt++;
        p=p->next;
    }
    return cnt;
}

void Link::doublyInsert(int index, int x){
    DNode* newnode,*p=head;
    if(index<0 || index>doublyCount()){
        return;
    }
    newnode=new DNode;
    newnode->val=x;
    if(index==0){
            newnode->prev=nullptr;
            newnode->next=head;
            if(p!=nullptr)
                head->prev=newnode;
            head=newnode;
    }
    else{
        for(int i=0;i<index-1;i++){
            p=p->next;
        }
        newnode->prev=p;
        newnode->next=p->next;
        if(p->next){
            p->next->prev=newnode;
        }
        p->next=newnode;
    }
}

int Link::deleteDoublyLink(int index){
    int x=0;
    DNode* p=head;
    if(index<1 || index>doublyCount()){
        return -1;
    }
    else if(index==1){
        head=head->next;
        x=p->val;
        if(head){
            head->prev=nullptr;
        }
        delete p;
    }
    else{
        for(int i=0;i<index-1;i++){
            p=p->next;
        }
        x=p->val;
        p->prev->next=p->next;
        if(p->next){
            p->next->prev=p->prev;
        }
        delete p;

    }
    return x;
}

void Link::reverseDoubly(){
    DNode *temp,*p=head;

    while(p){
        temp=p->next;
        p->next=p->prev;
        p->prev=temp;
        p=p->prev;
        if(p && !p->next){
            head=p;
        }
    }

}

void Link::createDoublyLoop(){
    DNode *p=head;
    while(p->next){
        p=p->next;
    }
    p->next=head;
    head->prev=p;
}

void Link::displayDoublyLoop(){
    DNode* p=head;
    cout<<"Circular Doubly Linked List"<<endl;
    do{
        cout<<p->val<<"<=>";
        p=p->next;
    }while(p!=head);
    cout<<"Head"<<endl;
}

int Link::doublyCircularCount(){
    int cnt=0;
    DNode* p=head;
    do
    {
        cnt++;
        p=p->next;
    } while (p!=head);

    return cnt;
    
}

int main(){
    int A[]={11,22,33,44,55,66,66,66,66,80,80,80};
    int len=sizeof(A)/sizeof(A[0]);
    int B[]={12,23,44,65,345,5767};
    int len2=sizeof(B)/sizeof(B[0]);
    Link l,l2;
    l.doublyCreate(B,len2);
    l.doublyDisplay();
    l.doublyInsert(0,700);
    l.doublyInsert(7,500);
    l.doublyDisplay();
    cout<<"Delete 1st position: "<<l.deleteDoublyLink(1)<<endl;
    l.doublyDisplay();
    cout<<"Delete last position: "<<l.deleteDoublyLink(7)<<endl;
    l.doublyDisplay();
    cout<<"Delete 3rd position: "<<l.deleteDoublyLink(3)<<endl;
    l.doublyDisplay();
    cout<<"Reverse Doubly Linked List"<<endl;
    l.reverseDoubly();
    l.doublyDisplay();
    
    l.createDoublyLoop();
    l.displayDoublyLoop();
    cout<<"Doubly Circular Count: "<<l.doublyCircularCount()<<endl;

    // l.createLoop();
    // l.circularDisplay();
    
    // l.insertCircular(0,100);
    // l.circularDisplay();
    
    // l.insertCircular(3,300);
    // l.circularDisplay();
    // cout<<"Delete: "<<endl;
    // l.deleteCircularElement(1);
    // l.deleteCircularElement(3);
    // l.circularDisplay();
    // cout<<"END"<<endl;
    
    // l2.create(B,len2);
    // l2.display();
    // l.merge(l2.getNode());
    // cout<<"Display Merge: "<<endl;
    // l.display();
    
    // cout<<"rSearch Element: "<<l.rSearch(l.getNode(),33)<<endl;
    // l.improveSearch(200);
    // l.improveSearch(100);
    // l.display();
    // l.insert(4,500);
    // l.display();
    // cout<<"Insert Last: "<<endl;
    // l.insertLast(30);
    // l.display();
    // cout<<"InsertSort: "<<endl;
    // l.sortedInsert(10);
    // l.sortedInsert(25);
    // l.sortedInsert(43);
    // l.sortedInsert(75);
    // l.display();
    // cout<<"Delete index 5: "<<l.Delete(5)<<endl;
    // l.removeDuplicate();
    // l.display();
    // cout<<"ReverseLink"<<endl;
    // l.reverseLink();
    // l.display();
    
    // cout<<"SlidingPtrPointer"<<endl;
    // l.slidingPtrReverse();
    // l.display();
    
    // cout<<"Reverse Link"<<endl;
    // l.rReverse(nullptr,l.getNode());
    // l.display();
    
    // cout<<"Number of Nodes: "<<l.countNode()<<endl;
    // cout<<"Concate"<<endl;
    // cout<<"IsLoop: "<<l.isLoop()<<endl;
    // l.createLoop();
    // cout<<"After CreatLoop"<<endl;
    // cout<<"isLoop: "<<l.isLoop()<<endl;

    // l.circularDisplay();
    // cout<<"Circular Link List Display: "<<endl;
    // l.RCircularDisplay(l.getNode());
    // cout<<"\nNumber of Nodes in Linked List: "<<l.circularLength()<<endl;

    // l.concate(l2.getNode());
    // l.display();
    // cout<<"Before Creating Loop"<<endl;
    // cout<<"Is Loop: "<<l.isLoop()<<endl;
    // cout<<"After creating Loop"<<endl;
    // l.createLoop();
    // cout<<"Is Loop: "<<l.isLoop();




    
    return 0;
}
