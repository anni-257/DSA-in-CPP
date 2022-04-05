#include<iostream>
using namespace std;

// Recursive approach

int factorial(int n){
	// for negative value recursion goes upto 262054 times --> avoid this neg,val
	
	if(n==0 || n==1)
		return 1;
		
	return factorial(n-1)*n;
}

// Iterative approach

int fact(int n){
	int fact=1;
	for(int i=2;i<=5;i++){
		fact*=i;
	}
	return fact;
}



int main(){
	int n=5;
	cout<<"Recursive: factorial of "<<n<<" is: "<<factorial(n)<<endl;
	cout<<"Iterative: "<<fact(n)<<endl;
	return 0;
}
