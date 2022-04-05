#include<iostream>
using namespace std;

int fun(int n){
	if(n>100)
		return n-10;
	return fun(fun(n+11));
	
}
int main(){

	// for every value of n less than equal 100 answer will be 91 only
	cout<<"Answer: "<<fun(97)<<endl; // 91
	cout<<"Answer: "<<fun(30)<<endl; // 91

}
