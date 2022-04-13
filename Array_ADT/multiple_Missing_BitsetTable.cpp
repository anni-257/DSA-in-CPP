#include<iostream>
using namespace std;

void multi_Missing_Bitset(int A[],int n){
	int min,max;
	min=max=A[0];
	for(int i=1;i<n;i++){
	
		if(max<A[i]){
			max=A[i];
		}
		else if(min>A[i]){
			min=A[i];
		}
	}
	
	int H[max+1]={0};
	
	for(int i=0;i<n;i++){
		H[A[i]]++;
	}
	
	for(int i=min;i<=max;i++){
		if(H[i]==0){
			cout<<"Missing "<<i<<endl;
		}
	}
	
	
}

void Efficient_multi_miss_Bitset(int A[], int n){
	
	int max,min;
	max=min=A[0];
	
	for(int i=1;i<n;i++){
		if(max<A[i])
			max=A[i];

		else if(min>A[i])
			min=A[i];
	}
	
	int H[max-min+1]={0};
	
	for(int i=0;i<n;i++){
		H[A[i]-min]++;
	}
	
	for(int i=0;i<=max-min;i++){
		if(H[i]==0){
			cout<<"Missing: "<<i+min<<endl;
		}
	}
	
	
	
}
	

int main(){

	int A[]={12,10,9,3,6,15,17};
	int len=sizeof(A)/sizeof(A[0]);
	multi_Missing_Bitset(A,len);
	Efficient_multi_miss_Bitset(A,len);
	cout<<"End main"<<endl;
	return 0;


}
