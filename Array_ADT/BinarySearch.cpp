#include<iostream>
#include"Array.h"
using namespace std;

int Array::binarySearch(int key){
	int l=0; int mid;
	int h=length-1;
	
	while(l<=h){
		mid=(l+h)/2;
		
		if(A[mid]==key){
			return mid;
		}
		else if(key<A[mid]){
			h=mid-1;
		}
		else{
			l=mid+1;
		}
	}
	
	return -1;
}


int main(){
	Array arr;
	arr.display();
	cout<<"Searching for 44: "<<arr.binarySearch(44)<<endl;
	cout<<"Searching for 32: "<<arr.binarySearch(32)<<endl;
	cout<<"Searching for 33: "<<arr.binarySearch(33)<<endl;
	return 0;
	
}
