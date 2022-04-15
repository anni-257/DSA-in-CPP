#include<iostream>
using namespace std;

void C_Vowels_Consonents(char A[]){
	int vCount=0,cCount=0;
	
	for(int i=0;A[i]!=0;i++){
	
		if(A[i]=='a'|| A[i]=='e'|| A[i]=='i'|| A[i]=='o'|| A[i]=='u'
		||A[i]=='A'|| A[i]=='E'|| A[i]=='I'|| A[i]=='O'|| A[i]=='U'){
			vCount++;
		}
		else if(A[i]>=65 && A[i]<=90 || A[i]>=97 && A[i]<=122){
			cCount++;
		}
		
	}
	cout<<"No.of Vowels: "<<vCount<<endl;
	cout<<"No.of Consonents: "<<cCount<<endl;
}

int main(){

	char A[]="Hello I'm Aniket Tarale";
	C_Vowels_Consonents(A);
	return 0;

}
