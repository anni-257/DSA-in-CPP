 
#include<iostream>
#include"Array.h"
using namespace std;

void Array::insertSort(int x){
	int i=length-1;
	
	if(length==size){
		return ;
	}
	
	while(i>=0 && A[i]>x){
		A[i+1]=A[i];
		i--;
	}
	
	A[i+1]=x;
	length++;
	
}
	
	

int main(){
	Array arr;
	arr.display();
	cout<<"After inserting 25 in sorted array: "<<endl;
	arr.insertSort(25);
	arr.display();
	return 0;
}
