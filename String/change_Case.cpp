#include<iostream>
using namespace std;

// Upper ---> Lower = +32
// Lower ---> Upper = -32

void lowerCase(char A[]){
	for(int i=0;A[i]!=0;i++){
		A[i]+=32;
	}
}

void upperCase(char A[]){
	for(int i=0;A[i]!=0;i++){
		A[i]-=32;
	}
}

void reverseCase(char A[]){
	for(int i=0;A[i]!=0;i++){
		if(A[i]>=65 && A[i]<='Z'){
			A[i]+=32;
		}
		
		else if(A[i]>='a' && A[i]<=122){
			A[i]-=32;
		}
	}
}

int main(){
	
	char A[]="ANIKET";
	lowerCase(A);
	cout<<A<<endl;
	
	char B[]="tarale";
	upperCase(B);
	cout<<B<<endl;
	
	char C[]="AnIkEt TaRaLe";
	reverseCase(C);
	cout<<C<<endl;
	
	return 0;
}

