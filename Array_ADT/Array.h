#include<iostream>
using namespace std;

class Array{

	private:
		int size;
		int length;
		int *A;
	public:
	
	Array();
	Array(int sz, int length);
	void display();
	void append(int x);
	void insert(int index,int x);
	void Delete(int index);
	int linearSearch(int key);
	int swap(int *x,int *y);
	int improve_LSearch(int key);
	int binarySearch(int key);
	int rBinarySearch(int key,int l,int h);
	int get(int index);
	int replace(int index, int x);
	int max();
	int min();
	int sum();
	float avg();
	void reverse();
	void reverse2();
	void InsertSort(int x);
	bool isSorted();
	void rearrange();
	void leftShift();
	void leftRotate();
	void rightShift();
	void rightRotate();
	// For sorted 
	Array* merge(Array arr);
	Array* Union(Array arr);
	Array* Inter(Array arr);
	Array* diff(Array arr);
	// For unsorted 
	Array* unMerge(Array arr);
	Array* unUnion(Array arr);
	Array* unInter(Array arr);
	Array* unDiff(Array arr);
};

Array::Array(){
	cout<<"Enter size of an array: ";
	cin>>size;
	A=new int[size];
	cout<<"Enter number of numbers: ";
	cin>>length;
	cout<<"Enter all elements: "<<endl;
	for(int i=0;i<length;i++){
		cin>>A[i];
	}
}

Array::Array(int sz,int len){
	size=sz;
	length=len;
	cout<<"Enter all elements: "<<endl;
	for(int i=0;i<length;i++){
		cin>>A[i];
	}
}

/*void Array::display(){
	cout<<"Array elements are: ";
	for(int i=0;i<length;i++){
		cout<<A[i]<<" ";
	}
	cout<<endl;
}*/

