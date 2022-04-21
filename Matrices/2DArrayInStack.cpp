#include<iostream>
using namespace std;

/*int (*create_2dArray_Stack())[4]{
	int A[3][4]={{1,2,3,4},{2,4,6,8},{3,5,7,9}};
	cout<<A<<endl;
	return A;
} 

int (*A)[4]=create_2dArray_Stack();
// not prefereble returning local array*/

int main(){

	int A[3][4]={{1,2,3,4},{2,4,6,8},{3,5,7,9}};
	
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			cout<<A[i][j]<<" ";
		}
	}
	cout<<endl;
	return 0;
}
