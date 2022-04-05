#include<iostream>
using namespace std;

int factorial(int n){

	if(n==0 || n==1)
		return 1;
		
	return factorial(n-1)*n;
}

int main(){
	int n=5;
	cout<<"factorial of "<<n<<" is: "<<factorial(n)<<endl;
	return 0;
}
