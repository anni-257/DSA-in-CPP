#include<iostream>
using namespace std;

void no_Of_Words(char A[]){
	int word=1;
	for(int i=1;A[i]!=0;i++){
		if(A[i]==' ' && A[i-1]!=' ' && A[i+1]!=0){
			word++;
		}
		
	}
	cout<<"Number Of Words= "<<word<<endl;
}

int main(){
	char A[]=" Hello Aniket Here..!! ";
	no_Of_Words(A);
	return 0;

}
