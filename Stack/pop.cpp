#include<iostream>
#include"stack.cpp"
using namespace std;

void stack::pop(){
	if(isEmpty())
		cout<<"Stack UnderFlow"<<endl;
	else{
		top--;
	}
}
int main(){
	stack obj;
	obj.push(10);
	obj.push(20);
	obj.push(50);
	obj.pop();
	obj.push(60);
	obj.display();
	return 0;
}


