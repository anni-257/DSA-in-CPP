#include<iostream>
#include"Array.h"
using namespace std;
void Array::swap(int *x, int* y){
	int temp=*x;
	*x=*y;
	*y=temp;
}

int main(){
	Array arr;
	cout<<"Before swap: "<<endl;
	arr.display();
	cout<<"After swap: "<<endl;
	arr.swap(&arr.A[0],&arr.A[3]);
	arr.display();
	return 0;

}


