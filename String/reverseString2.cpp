#include<iostream>
using namespace std;

void swap(char *x, char *y){
    char temp=*x;
    *x=*y;
    *y=temp;
}

void reverse(char *A){
    int i=0;
    for(;A[i]!=0;i++);
    i--;
    for(int j=0;j<i;j++,i--){
        swap(&A[i],&A[j]);
    }

}

void display(char *A){
    cout<<"String 🙂"<<endl;
    for(int i=0;A[i]!=0;i++){
        cout<<A[i];
    }
    cout<<endl;

}

int main(){
    char A[]="Aniket Tarale Patil";
    display(A);
    reverse(A);
    display(A);
    return 0;

}
