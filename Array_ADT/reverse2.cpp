#include<iostream>
#include"Array.h"
using namespace std;

void Array::reverse(){
	int *B=new int[length];
	int i=length-1,j=0;
	for(;i>=0;i--,j++){
		B[j]=A[i];
	}
	for(int i=0;i<length;i++){
		A[i]=B[i];
	}
}

void Array::reverse2(){
	int *B=new int[length];
	int i=length-1,j=0;
	for(;i>=0;i--,j++){
		B[j]=A[i];
	}
	
	delete []A;
	A=B;
	B=nullptr;
}
int main(){
	Array arr;
	cout<<"Before reverse: "<<endl;
	arr.display();
	cout<<"After reverse: "<<endl;
	arr.reverse2();
	arr.display();
	cout<<"Again reverse: "<<endl;
	arr.reverse();
	arr.display();
	return 0;
	
}
