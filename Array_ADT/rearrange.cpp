#include<iostream>
#include"Array.h"
using namespace std;

void Array::rearrange(){
	int i=0, j=length-1;
	
	while(i<j){
	
		while(A[i]<0)
			i++;
		while(A[j]>=0)
			j--;
		if(i<j){
			swap(&A[i],&A[j]);
		}
	}
}

int main(){

	Array arr;
	cout<<"Before rearrangement: "<<endl;
	arr.display();
	cout<<"After rearrangement: "<<endl;
	arr.rearrange();
	arr.display();
	return 0;
	
		
	
}


