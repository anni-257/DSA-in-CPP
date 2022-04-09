#include<iostream>
#include"Array.h"
using namespace std;

int Array::rBinarySearch(int key,int h,int l){
	int mid=0;
	
	if(l<=h){
		mid=(l+h)/2;
		if(A[mid]==key){
			return mid;
		}
		else if(key<A[mid]){

			return rBinarySearch(key,mid-1,l);
		}
		else{
			
			return rBinarySearch(key,h,mid+1);
		}
	}
	
	return -1;
}

int main(){
	Array arr;
	arr.display();
	cout<<"Searching for 22: "<<arr.rBinarySearch(22,arr.getLength()-1,0)<<endl;
	cout<<"Searching for 44: "<<arr.rBinarySearch(44,arr.getLength()-1,0)<<endl;
	cout<<"Searching for 32: "<<arr.rBinarySearch(32,arr.getLength()-1,0)<<endl;
	
}
