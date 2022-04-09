#include<iostream>
#include"Array.h"
using namespace std;

Array* Array::merge(Array *arr){
	int i,j,k;
	i=j=k=0;
	int sz=size+arr->size;
	Array *arr2=new Array(sz);
	arr2->A=new int[size];
	
	while(i<length && j< arr->length){
		if(A[i]<arr->A[j]){
			arr2->A[k++]=A[i++];
		}
		else{
			arr2->A[k++]=arr->A[j++];
		}
	}
	
	for(;i<length;i++){
		arr2->A[k++]=A[i];
	}
	
	for(;j<arr->length;j++){
		arr2->A[k++]=arr->A[j];
	}
	
	arr2->length=k;
	
	return arr2;
}

int main(){
	Array *arr1=new Array(10,5);
	Array *arr2=new Array(10,6);
	Array *arr3;
	cout<<"Array 1:"<<endl;
	arr1->display();
	cout<<"Array 2:"<<endl;
	arr2->display();
	cout<<"Merge of Array1 & Array2: ";
	arr3=arr1->merge(arr2);
	arr3->display();
	return 0;
	
	
}
