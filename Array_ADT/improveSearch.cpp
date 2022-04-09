#include<iostream>
#include"Array.h"
using namespace std;

int Array::improve_LSearch(int key){

	for(int i=0;i<length;i++){
		if(key==A[i]){
			swap(&A[i],&A[0]);
			return i;
		}
	}
	
	return -1;

}

int main(){

	Array arr;
	arr.display();
	cout<<"Searching  33: "<<arr.improve_LSearch(33)<<endl;
	cout<<"Again Searching for 33: "<<arr.improve_LSearch(33)<<endl;
	return 0;
}
