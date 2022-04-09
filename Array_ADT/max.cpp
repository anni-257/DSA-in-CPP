#include<iostream>
#include"Array.h"
using namespace std;

int Array::max(){

	int max=INT32_MIN;
	
	for(int i=0;i<length;i++){
		if(max<A[i])
			max=A[i];
	}
	
	return max;
}
int main(){
	Array arr;
	arr.display();
	cout<<"Maximum element in an Array: "<<arr.max()<<endl;
}
