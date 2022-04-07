#include<iostream>
using namespace std;

int fibo(int n){

	if(n==0 || n==1){
		return n;
	}
	
	return fibo(n-1)+fibo(n-2);
}

int main(){

	cout<<"Fibo 0: "<<fibo(0)<<endl;
	cout<<"Fibo 1: "<<fibo(1)<<endl;
	cout<<"Fibo 2: "<<fibo(2)<<endl;
	cout<<"Fibo 3: "<<fibo(3)<<endl;
	
}
