#include<iostream>
#include"Array.h"
using namespace std;

bool Array::isSorted(){
	for(int i=0;i<length-1;i++){
		if(A[i]>A[i+1]){
			return false;
		}
			
	}
	
	return true;
	
}

int main(){

	Array arr;
	arr.display();
	cout<<"isSorted ?= "<<arr.isSorted()<<endl;
	return 0;
	
}


