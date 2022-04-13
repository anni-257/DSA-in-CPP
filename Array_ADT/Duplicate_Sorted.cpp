#include<iostream>
using namespace std;

void duplicate_Sorted(int A[], int n){
	int lastDuplicate=-1;
	for(int i=0;i<n-1;i++){
		if(A[i]==A[i+1] && A[i]!=lastDuplicate){
			cout<<"Duplicate: "<<A[i]<<endl;
			lastDuplicate=A[i];
		}
	}
}

int main(){
	int A[]={3,6,8,8,10,12,15,15,15,20};
	int len=sizeof(A)/sizeof(A[0]);
	duplicate_Sorted(A,len);
	return 0;

}
