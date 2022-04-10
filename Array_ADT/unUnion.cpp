#include<iostream>
#include"Array.h"
using namespace std;

Array* Array::unUnion(Array *arr){
	int i,j,k,flag;
	i=j=k=0;
	Array *arr2=new Array(size+arr->size);
	arr2->A=new int[length+arr->length];
	while(i<length){
		arr2->A[k++]=A[i++];
	}
	for(;j<arr->length;j++){
		flag=0;
		for(int i=0;i<length;i++){
			if(arr->A[j]==arr2->A[i]){
				flag=1;
			}
		}
		
		if(flag!=1){
			arr2->A[k++]=arr->A[j];
		}
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
	cout<<"Union of two unsorted array"<<endl;
	arr3=arr->unUnion(arr2);
	arr3->display();
	
	return 0;
	
	

}
