#include<iostream>
#include"Array.h"
using namespace std;

void Array::leftShift(){
	int i;
	for(i=0;i<length-1;i++){
		A[i]=A[i+1];
	}
	
	A[i]=0;
}

int main(){
	Array arr(10,5);
	arr.display();
	cout<<"After left shift -->"<<endl;
	arr.leftShift();
	arr.display();
	return 0;
}
