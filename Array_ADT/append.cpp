#include<iostream>
#include"Array.h"
using namespace std;

void Array::append(int x){
	if(length<size){
		A[length++]=x;
	}
}

int main(){
	Array arr;
	cout<<"Before append"<<endl;
	arr.display();
	cout<<"After append"<<endl;
	arr.append(110);
	arr.display();

}


