#include<iostream>
using namespace std;

int main(){
	char name[]="Aniket";
	name[4]='T'; // valid
	//name="Tarale"; invalid
	cout<<"Size of Name: "<<sizeof(name)<<endl;
	cout<<"name: "<<name<<" "<<"&name: "<<&name<<endl;
	
	const char *Name="Aniket";
	//Name[4]='T'; invalid
	//Name="Tarale"; valid
	cout<<"Size of Name: "<<sizeof(name)<<endl;
	cout<<"name: "<<Name<<" "<<"&name: "<<&Name<<endl;
	
	
}
