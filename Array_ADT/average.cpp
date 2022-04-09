#include<iostream>
#include"Array.h"
//#include"sum.cpp"
using namespace std;

int Array::sum(){
	int sum=0;
	for(int i=0;i<length;i++){
		sum+=A[i];
	}
	return sum;
}

float Array::avg(){
	return float(sum())/length;
}


int main(){
	Array arr;
	arr.display();
	cout<<"Avg of array: "<<arr.avg()<<endl;
	return 0;
}
