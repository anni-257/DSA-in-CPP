#include<iostream>
#include"Matrices.cpp"
using namespace std;

void Matrix::diagonalInit(){
	for(int i=1;i<=row;i++){
			for(int j=1; j<=column;j++){
				if(i==j){
				cout<<"Enter Element at "<<i<<"th row and "<<j<<"th column"<<endl;
				cin>>A[i-1][j-1];}
			}
		}
		
}

void Matrix::diagonalDisp(){
	cout<<"Diagonal Elements are: "<<endl;
	for(int i=1;i<=row;i++){
		for(int j=1;j<=column;j++){
			if(i==j){
				cout<<A[i-1][j-1]<<" ";
				
			}
			else
				cout<<"0 ";
		}
		cout<<endl;
	}
}

void Matrix::set(int r, int c){
	if(r>row || c>column){
		return ;
	}
	cout<<"Enter Element at "<<r<<"th row and "<<c<<"th column"<<endl;
	cin>>A[r-1][c-1];
}

int Matrix::get(int r,int c){
	if(r>row || c>column){
			return -1;
		}
		
	return A[r-1][c-1];
}

int main(){
	int n;
	cout<<"Enter Diamension for diagonal matrices: ";
	cin>>n;
	Matrix m(n);
	m.diagonalInit();
	m.diagonalDisp();
	cout<<"Get Element at A(1,3): "<<m.get(1,3)<<endl;
	m.set(3,3);
	m.diagonalDisp();
	return 0;
	
	
	
}
