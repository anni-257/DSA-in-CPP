#include<iostream>
using namespace std;

int sumOfNaturalNumbers(int n){
	if(n>1){
		return n+sumOfNaturalNumbers(n-1);
	}
	return 1;
}
int main(){
	int n=10;
	cout<<"Sum of first "<<n<<" numbers is: "<<sumOfNaturalNumbers(n)<<endl;
	return 0;
}
