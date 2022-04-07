#include<iostream>
#include"Array.h"
using namespace std;

void Array::display(){
	cout<<"Array elements are: ";
	for(int i=0;i<length;i++){
		cout<<A[i]<<" ";
	}
	cout<<endl;
}

int main(){

	Array *arr=new Array;
	arr->display();
	return 0;

}


