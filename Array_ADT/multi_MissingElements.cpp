#include<iostream>
using namespace std;

void missingElement(int A[],int n){
	int diff=A[0]-0;
	for(int i=1;i<n;i++){
		if(A[i]-i!=diff){
			cout<<"Missing : "<<i+diff<<endl;
		}
	}
}


int main(){
	int A[]={23,24,28,29,30,35};
	int len=sizeof(A)/sizeof(A[0]);
	missingElement(A,len);
	return 0;
}
