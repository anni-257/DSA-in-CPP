#include<iostream>
using namespace std;

int p=0,P=0;

// space complexity= O(n);
// time complexity= O(n);

int pow(int x,int n){
	p++;
	if(n){
		return x*pow(x,n-1);
	}
	return 1;
	
}

// Efficient code 
// Even Power: 2^8 = (2)^8 ~ (2*2)^8/2 = (2*2)^4
// Odd Power: 2^9 = 2*(2*2)^4

int Pow(int x, int n){
	P++;
	
	if(n==0)
		return 1;
	else if(x%2==0)
		return Pow(x*x,n/2);

	return x*Pow(x*x,n/2);
	
}

int main(){
	cout<<"2^8 = "<<pow(2,8)<<"Rotation= "<<p<<endl; // 9 Rotations
	cout<<"2^8 = "<<Pow(2,8)<<"Rotation= "<<P<<endl; // 5 Rotations
	return 0;
}
