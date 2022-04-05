#include<iostream>
using namespace std;

// Recursive approach

int sumOfNaturalNumbers(int n){
	if(n>1){
		return n+sumOfNaturalNumbers(n-1);
	}
	return 1;
}

int iterativeSum(int n){
	int sum=0;
	for(int i=1;i<=n;i++){
		sum+=i;
	}
	
	return sum;
}

// Direct Method

int directSum(int n){
	return n*(n+1)/2;
}


int main(){
	int n=10;
	cout<<"Recursive: Sum of first "<<n<<" numbers is: "<<sumOfNaturalNumbers(n)<<endl;
	cout<<"Iterative: "<<iterativeSum(n)<<endl;
	cout<<"Direct formula: "<<directSum(n)<<endl;
	return 0;
}
