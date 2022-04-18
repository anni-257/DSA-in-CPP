#include<iostream>
using namespace std;

int length(char A[]){
    int i=0;
    for(;A[i]!=0;i++);
    
    return i;
    
}

char* reverseString(char A[]){

    char *a=new char[length(A)];
    int i=0,j=0;
    for(;A[i]!=0;i++);
    i--;
    for(;i>=0;j++,i--){
        a[j]=A[i];
    }
    
    a[j]=0;
    
    return a;
}

int main(){
    char A[]="Aniket Tarale";
    char *B=reverseString(A);
    cout<<"String A: "<<endl;
    for(char x:A){
        cout<<x;
    }
    cout<<endl;
    cout<<"String B: "<<endl;
    for(int i=0;B[i]!=0;i++){
        cout<<B[i];
    }
    cout<<endl;
    
    return 0;
    
    

}
