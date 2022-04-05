#include<iostream>
using namespace std;

void linearRecursion(int n){
	if(n>0){ // Recursive function call should be one time.
	 
		//......
		linearRecursion(n-1);
		//......
	}
}

void treeRecursion(int n){
	if(n>0){ // Recursive function call should be more than one time.
	
		//....
		treeRecursion(n-1);
		//....
		treeRecursion(n-1);
	}
}

int main(){

	// Calling to linearRecursion() function
	// Calling to treeRecursion() function
}
