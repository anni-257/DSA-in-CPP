#include<iostream>
#include"Array.h"
using namespace std;

int Array::linearSearch(int key){
	for(int i=0;i<length;i++){
		if(A[i]==key){
			return i;
		}
	}
	
	return -1;
}


int main(){
	Array arr;
	arr.display();
	cout<<"Searching for 32: "<<arr.linearSearch(32)<<endl;
	cout<<"Searching for 20: "<<arr.linearSearch(20)<<endl;
	

	return 0;
}


