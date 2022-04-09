#include<iostream>
#include"Array.h"
using namespace std;

void Array::rightShift(){

	if(length<size){
	
		int i=length-1;
		for(;i>0;i--){
			A[i]=A[i-1];
		}
		A[i]=0;
	}
	
}

int main(){
	Array arr(10,5);
	arr.display();
	cout<<"After right Shift"<<endl;
	arr.rightShift();
	arr.display();
	return 0;
}


