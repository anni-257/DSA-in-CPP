#include<iostream>
#include "stack.cpp"
using namespace std;

void stack::push(int x){
	if(isFull())
		cout<<"Stack is Overflow"<<endl;
	else{
		
		A[++top]=x;
	}
}

int main(){
	stack obj;
	obj.push(10);
	obj.push(20);
	obj.push(30);
	obj.display();
	return 0;

}
