#include<iostream>
#include"Array.h"
using namespace std;

int Array::min(){
	int min=INT32_MAX;
	for(int i=0;i<length;i++){
		if(min>A[i]){
			min=A[i];
		}
	}
	
	return min;
}

int main(){
	Array arr;
	arr.display();
	cout<<"Minimun element in an array: "<<arr.min()<<endl;
	return 0;
}

