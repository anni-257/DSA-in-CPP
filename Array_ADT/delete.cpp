#include<iostream>
#include"Array.h"
using namespace std;

void Array::Delete(int index){
	if(index>=0 && index<length){
		for(int i=index;i<length-1;i++){
			A[i]=A[i+1];
		}
		length--;
	}
}

int main(){
	Array arr;
	arr.display();
	arr.Delete(3);
	arr.display();
	return 0;
}
