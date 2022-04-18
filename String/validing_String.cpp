#include<iostream>
using namespace std;

bool valid_String(char *name){

	if(name[0]>=48 && name[0]<=57)
		return 0;
	
	for(int i=0;name[i]!=0;i++){
		
		if(!(name[i]>=65 && name[i]<=90) && !(name[i]>=97 && name[i]<=122) && !(name[i]>=48 && name[i]<=57) && name[i]!=95)
			return 0;
		
	}
	
	return 1;
	
	
}


int main(){
	char A[]="_Anni_2?57";
	
	if(valid_String(A)){
		cout<<"Valid String"<<endl;
	}
	else{
		cout<<"Invalid String"<<endl;
	}

}
