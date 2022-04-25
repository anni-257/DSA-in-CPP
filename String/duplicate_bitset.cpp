#include<iostream>
using namespace std;



int main(){
	char A[]="finding";
	int H[26]={0};
	
	for(int i=0;A[i]!=0;i++){
		H[A[i]-97]++;
	}
	for(int i=0;i<26;i++){
		if(H[i]>1)
			cout<<"letter "<<char(i+97)<<" no.of times "<<H[i]<<endl;
	}
	
	return 0;
	

}
