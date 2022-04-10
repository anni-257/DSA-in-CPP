#include<iostream>
#include"Array.h"
using namespace std;

Array* Array::unMerge(Array *arr){
	int i,j,k;
	i=j=k=0;
	Array *arr2=new Array(size+arr->size);
	arr2->A=new int[length+arr->length];
	
	while(i<length){
		arr2->A[k++]=A[i++];
	}
	
	while(j<arr->length){
		arr2->A[k++]=arr->A[j++];
	}
	
	arr2->length=k;
	return arr2;
}


int main(){
	Array *arr=new Array(10,5);
	Array *arr2=new Array(10,6);
	Array *arr3;
	cout<<"Array1:"<<endl;
	arr->display();
	cout<<"Array2:"<<endl;
	arr2->display();
	cout<<"Merge of two unsorted array: "<<endl;
	arr3=arr->unMerge(arr2);
	arr3->display();
	

	return 0;
}
