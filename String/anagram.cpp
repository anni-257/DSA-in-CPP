#include<iostream>
using namespace std;

void checkAnalgram(char *str1, char *str2){
	int i=0,j=0;
	int H[26]={0};
	for(;str1[i]!=0;i++){
		H[str1[i]-97]++;
	}
	for(;str2[j]!=0;j++){
		H[str2[j]-97]--;
		if(H[str2[j]-97]<0){
			cout<<"not an Analgram"<<endl;
			break;
		}
	}
	if(str2[j]==0)
		cout<<"Its an Analgram"<<endl;
		
	
}

int main(){
	char A[]="ABCDE";
	char B[]="AEBCZE";
	checkAnalgram(A,B);
	
	return 0;
}
