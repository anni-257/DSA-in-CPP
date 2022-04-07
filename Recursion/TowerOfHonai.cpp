#include<iostream>
using namespace std;

void TOH(int n,char A,char B,char C){
	if(n){
		TOH(n-1,A,C,B);
		cout<<"Move Disc from "<<A<<" to "<<C<<endl;
		TOH(n-1,B,A,C);
	}
}


int main(){

	TOH(3,'A','B','C');

}
