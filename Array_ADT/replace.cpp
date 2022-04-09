#include<iostream>
#include"Array.h"
using namespace std;

void Array::replace(int index, int x){
	if(index>=0 && index<length){
		A[index]=x;
	}
}

int main(){
	Array arr;
	arr.display();
	arr.replace(3,40);
	arr.display();
	return 0;
}
