#include<iostream>
#include"Array.h"
using namespace std;

int Array::sum(){
	int sum=0;
	for(int i=0;i<length;i++){
		sum+=A[i];
	}
	
	return sum;
}

int main(){
	Array arr;
	arr.display();
	cout<<"Sum of all Elements is= "<<arr.sum()<<endl;
	return 0;
}

