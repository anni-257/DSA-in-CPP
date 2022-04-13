#include<iostream>
using namespace std;

void multiple_Sorted(int A[], int n){
	int min,max;
	min=max=A[0];
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
	
	for(int i=min;i<=max-min;i++){
		if(H[i]>1){
			cout<<i+min<<" : "<<H[i]<<" times"<<endl;
		}
	}
}

int main(){

	int A[]={9,8,10,8,11,6,8,7,12,4,11};
	int len=sizeof(A)/sizeof(A[0]);
	
	multiple_Sorted(A,len);
	return 0;


}
