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

int main(){

	cout<<"Fibo 0: "<<fibonacci(0)<<endl;
	cout<<"Fibo 1: "<<fibonacci(1)<<endl;
	cout<<"Fibo 2: "<<fibonacci(2)<<endl;
	cout<<"Fibo 3: "<<fibonacci(3)<<endl;
	
}
