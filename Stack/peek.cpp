#include<iostream>
#include"stack.cpp"
using namespace std;

int stack::peek(int pos){
	int x=-1;
	if(top-pos+1<0)
		cout<<"Invalid Position"<<endl;
	else
		x=A[top-pos+1];
		
	return x;
}
int main(){
	stack obj;
	obj.push(10);obj.push(20);obj.push(30);
	cout<<"Element at 3rd position: "<<obj.peek(2)<<endl;
	return 0;
}

