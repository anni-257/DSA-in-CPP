#include<iostream>
using namespace std;

int main(){

	int *A[3];
	for(int i=0;i<3;i++){
		A[i]=new int[4];
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			cin>>A[i][j];
		}
	}
	cout<<"2D-Matrix"<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			cout<<A[i][j]<<" ";
		}
		cout<<endl;
	}
	
	return 0;
	
	
}
