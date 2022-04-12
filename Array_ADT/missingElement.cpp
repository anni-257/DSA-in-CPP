#include<iostream>
using namespace std;

int missingElement(int A[],int n){
	int max=A[0],totalSum=0,sum=0;
	
	for(int i=0;i<n;i++){
		sum=sum+A[i];
		if(max<A[i]){
			max=A[i];
		}
	}
	
	totalSum=max*(max+1)/2;
	
	return totalSum-sum;
}

int MissingElement(int A[],int n){
	
	int diff=A[0]-0;
	for(int i=1;i<n;i++){
	
		if(A[i]-i!=diff)
			return i+diff;
	}
	
	return -1;

}

int main(){
	int A[]={1,0,5,3,4,2,7,9,6};
	int len=sizeof(A)/sizeof(A[0]);
	int B[]={45,46,47,49,50};
	int len2=sizeof(B)/sizeof(0[B]);
	int x;
	
	x=missingElement(A,len);
	cout<<"Missing Element from Array-A is: "<<x<<endl;
	x=MissingElement(B,len);
	cout<<"Missing Element from Array-B is: "<<x<<endl;
	return 0;
}
