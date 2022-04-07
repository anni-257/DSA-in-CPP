#include<iostream>
#include"Array.h"
using namespace std;

void Array::insert(int index, int x){
	if(index>=0 && index<size){
		for(int i=length;i>index;i--){
			A[i]=A[i-1];
		}
		A[index]=x;
		length++;
	}
}


int main(){
	Array arr;
	arr.display();
	arr.insert(2,200);
	arr.display();
	return 0;
}
