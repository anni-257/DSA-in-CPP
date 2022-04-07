#include<iostream>
using namespace std;

//Recursive
int fibo(int n){

	if(n==0 || n==1){
		return n;
	}
	
	return fibo(n-1)+fibo(n-2);
}

//Iterative

int fibonacci(int n){
	int t0=0, t1=1,s=0;
	if(n<=1)
		return n;
	for(int i=2;i<=n;i++){
		s=t0+t1;
		t1=s;
		t0=t1;
	}
	
	return s;
}

// Memorizarion

int A[10]={-1};

int Fibo(int n){
	if(n<=1){
		A[n]=n;
		return n;
	}
	else{
		if(A[n-1]==-1){
			A[n-1]=Fibo(n-1);
		}
		
		if(A[n-2]==-1){
			A[n-2]=Fibo(n-2);
		}
		
		A[n]=A[n-2]+A[n-1];
	}
	
	return A[n];
}

int main(){

	cout<<"Fibo 0: "<<Fibo(0)<<endl;
	cout<<"Fibo 1: "<<Fibo(1)<<endl;
	cout<<"Fibo 2: "<<Fibo(2)<<endl;
	cout<<"Fibo 3: "<<Fibo(3)<<endl;
	
}
