#include<iostream>
#include"Array.h"
using namespace std;

Array* Array::unDiff(Array *arr){
	int i,k,flag;
	i=k=0;
	Array *arr2=new Array(length);
	arr2->A=new int[length];
	
	for(;i<length;i++){
		flag=0;
		for(int j=0;j<arr->length;j++){
			if(A[i]==arr->A[j]){
				flag=1;
			}
		}
		if(flag==0){
			arr2->A[k++]=A[i];
		}
	}
	arr2->length=k;
	return arr2;
}


int main(){
	
	Array *arr=new Array(10,5);
	Array *arr2=new Array(10,6);
	Array *arr3;
	cout<<"Array1: "<<endl;
	arr->display();
	cout<<"Array2: "<<endl;
	arr2->display();
	cout<<"Difference between two unsorted array"<<endl;
	arr3=arr->unDiff(arr2);
	arr3->display();
	return 0;
}

