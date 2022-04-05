#include<iostream>
using namespace std;

void tail(int n){
	if(n){ // Tail Recursion - processing done at calling time
		cout<<n<<" ";
		tail(n-1);
	}
}

void head(int n){
	if(n){ // Head Recursion - processing done at returning time;
		head(n-1);
		cout<<n<<" ";
	}
}

int main(){
	int n=5;
	cout<<"Head Recursion: ";
	head(n);
	cout<<endl;
	cout<<"Tail Recursion: ";
	tail(n);
	cout<<endl;
}
