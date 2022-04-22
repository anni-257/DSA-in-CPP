#include<iostream>
using namespace std;

// This is a Header file

class Matrix{
	int row;
	int column;
	int **A;
	public:
	Matrix(){
		cout<<"Enter no.of rows: ";
		cin>>row;
		A=new int*[row];
		cout<<"Enter no.of column: ";
		cin>>column;
		for(int i=0;i<row;i++){
			A[i]=new int [column];
		}
		
		
		
	}
	Matrix(int diam){
		row=column=diam;
		A=new int*[diam];
		for(int i=0;i<diam;i++){
			A[i]=new int[diam];
		}
	}
	void diagonalInit();
	void diagonalDisp();
	void set(int, int);
	int get(int r,int c);
};

