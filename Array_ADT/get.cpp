#include<iostream>
#include"Array.h"
using namespace std;

int Array::get(int index){
	if(index<length && index>=0){
		return A[index];
	}
	
	return -1;
}


int main(){
	
	Array arr;
	arr.display();
	cout<<"Element at 0th index: "<<arr.get(0)<<endl;
	cout<<"Element at 1st index: "<<arr.get(1)<<endl;
	cout<<"Element at 2nd index: "<<arr.get(2)<<endl;
	cout<<"Element at 3rd index: "<<arr.get(3)<<endl;
	
	return 0;
}


