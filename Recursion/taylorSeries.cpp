#include<iostream>
using namespace std;

/* Taylor series

e^x = 1+x/1!+x^2/2!+x^3/3!+x^4/4!+....+n terms

*/

double e(double x, int n){
	static double p=1,f=1;
	double result;
	if(n==0){
		return 1;
	}
	else{
		result=e(x,n-1);
		p*=x; // power
		f*=n; // factorial
	}
	
	return result+p/f; // Summation
	
}

// Horner's rule

double E(double x, int n){

	double s=1;
	
	for(;n>0;n--){
		s=1+x*s/n;
	}
	return s;
}

// recursion 

double taylor(double x, int n){
	static double s=1;
	if(!n){
		return s;
	}
	
	s=1+x/n*s;
	
	return taylor(x,n-1);
}

double Taylor(double x, int n){
	double num=1;
	double den=1;
	double s=1;
	for(int i=1;i<=n; i++){
		num*=x;
		den*=i;
		s+=num/den;
	}
	
	return s;
}
 

int main(){

	cout<<"e(12,10)= "<<e(12,10)<<endl;
	cout<<"E(12,10)= "<<E(12,10)<<endl;
	cout<<"taylor(12,10)= "<<taylor(12,10)<<endl;
	cout<<"Taylor(12,10)= "<<Taylor(12,10)<<endl;

}
