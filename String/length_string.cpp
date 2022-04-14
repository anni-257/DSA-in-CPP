#include<iostream>
using namespace std;

int length(char A[]){
	int i=0;
	while(A[i]!=0){
		i++;
	}
	
	return i;
	
}

int main(){
	char A[]={'A','N','I','K','E','T',0};
	cout<<length(A)<<endl;
	return 0;
}
