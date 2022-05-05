#include<iostream>
#include"stack.cpp"
using namespace std;

int stack ::stackTop(){
	if(top==-1){
		return -1;
	}
	
	return A[top];
}

int main(){
	stack obj;
	obj.push(10);
	obj.push(20);
	cout<<"StackTop: "<<obj.stackTop()<<endl;
	obj.push(30);
	obj.push(40);
	cout<<"StackTop: "<<obj.stackTop()<<endl;
	return 0;
	
	
}


