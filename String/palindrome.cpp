#include<iostream>
using namespace std;

void checkpalindrome(char *A){
	int i=0,j=0, flag=0;
	for(;A[i]!=0;i++);
	i--;
	for(;j<i;i--,j++){
		if(A[i]!=A[j]){
			flag=1;
			break;	
		}
	}
	if(flag==1)
		cout<<"Not a palindrome"<<endl;
	else
		cout<<"It is a palindrome"<<endl;
	
}

int main(){
	char A[]="NITIN0";
	checkpalindrome(A);
	return 0;

}
