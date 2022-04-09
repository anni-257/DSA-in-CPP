#include<iostream>
#include"Array.h"
using namespace std;

Array* Array::diff(Array *arr){
	int i,j,k;
	i=j=k=0;
	Array *arr2=new Array(size+arr->size);
	arr2->A=new int[length+arr->length];
	
	while(i<length && j<arr->length){
		if(A[i]<arr->A[j]){
			arr2->A[k++]=A[i++];
		}
		else if(arr->A[j]<A[i]){
			arr2->A[k++]=arr->A[j++];
		}
		else{
			i++;
			j++;
		}
	}
	
	for(;i<length;i++){
		arr2->A[k++]=A[i];
	}
	
	arr2->length=k;
	return arr2;
}

int main(){

	Array *arr=new Array(10,5);
	Array *arr2=new Array(10,6);
	Array *arr3;
	cout<<"Array 1:"<<endl;
	arr->display();
	cout<<"Array 2:"<<endl;
	arr2->display();
	cout<<"Difference of two array: "<<endl;
	arr3=arr->diff(arr2);
	arr3->display();
	
	return 0;
}


