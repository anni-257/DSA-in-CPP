#include<iostream>
#include"Array.h"
using namespace std;

void Array::reverse(){
	int i=length-1, j=0;
	int *B=new int[length];
	for(;i>=0;i--,j++){
		B[j]=A[i];
	}
	for(int i=0;i<length;i++){
		A[i]=B[i];
	}
}

int main(){
	Array arr;
	cout<<"Before reverse: "<<endl;
	arr.display();
	cout<<"After reverse: "<<endl;
	arr.reverse();
	arr.display();
	
	return 0;
	
}


