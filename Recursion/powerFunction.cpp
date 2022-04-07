#include<iostream>
using namespace std;

int pow(int x,int n){
	if(n){
		return x*pow(x,n-1);
	}
	return 1;
	
}

int main(){
	cout<<"3^3 = "<<pow(3,3)<<endl;
	return 0;
}
