#include<iostream>
using namespace std;

void pair_Sum(int A[], int n){
	int i=0,j=0,k;
	cout<<"Enter sum :";
	cin>>k;
	
	for(;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(A[i]+A[j]==k){
			
				cout<<A[i]<<" + "<<A[j]<<"= "<<k<<endl;
				
			}
		}
	}
	
}

int main(){
	int A[]={6,3,8,10,16,7,5,2,9,14};
	int len=sizeof(A)/sizeof(A[0]);
	
	pair_Sum(A,len);
	
	return 0;
}
