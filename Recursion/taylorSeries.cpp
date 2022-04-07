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
		p+=x; // power
		f*=n; // factorial
	}
	
	return result+p/f; // Summation
	
}
 

int main(){

	cout<<"e(12,5)= "<<e(12,10)<<endl;

}
