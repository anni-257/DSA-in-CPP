#include<iostream>
#include"Array.h"
using namespace std;

void Array::leftRotate(){
	int x=A[0], i=0;
	for(;i<length-1;i++){
		A[i]=A[i+1];
	}
	A[i]=x;
}

int main(){
	Array arr(10,5);
	arr.display();
	cout<<"After left Rotation"<<endl;
	arr.leftRotate();
	arr.display();
	
	return 0;
}
