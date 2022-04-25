#include<iostream>
using namespace std;

void pair_Sum_Bitset(int A[],int n){
	int min,max;
	min=max=A[0];
	for(int i=1;i<n;i++){
		if(max<A[i])
			max=A[i];
		else if(min>A[i])
			min=A[i];
	}
	
	int H[max-min+1];
	for(int i=0;i<n;i++)
		H[A[i]]++;
		
	for(int i=0;i<=max-min;i++){
		if(H[k-A[i]]!=0){
			cout<<A[i]<<" + "<<k-A[i]<<"= "<<k<<endl;
		}
	}
}

int main(){
	

}
