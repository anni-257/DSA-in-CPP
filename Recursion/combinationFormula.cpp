#include<iostream>
using namespace std;

int fact(int n){
	if(n==0)
		return 1;
	
	return  n*fact(n-1);
}

int C(int n, int r){
	int t1,t2,t3;
	
	t1=fact(n);
	t2=fact(r);
	t3=fact(n-r);
	
	return t1/(t2*t3);
}


// Pascal triangle 

int c(int n, int r){
	if(r==0 || n==r)
		return 1;
		
	return c(n-1,r-1)+c(n-1,r);
}

int main(){

	cout<<"4C2= "<<C(4,2)<<endl;
	cout<<"5C1= "<<c(4,2)<<endl;

}
