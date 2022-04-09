#include<iostream>
#include"Array.h"
using namespace std;

void Array::rightRotate(){
	int x=A[length-1], i=length-1;
	for(;i>0;i--){
		A[i]=A[i-1];
	}
	A[i]=x;
}


int main(){
	Array arr(10,5);
	arr.display();
	cout<<"After right Rotation:"<<endl;
	arr.rightRotate();
	arr.display();
	return 0;
}
