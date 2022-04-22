#include<iostream>
using namespace std;

void compare(char *A, char *B){
    
    int i=0,j=0;
    for(;A[i]!=0 && B[j]!=0;i++,j++){
        if(A[i]!=B[j])
            break;
    }
    if(A[i]==B[j])
        cout<<"Equal"<<endl;
    else if(A[i]<B[j])
        cout<<"Smaller"<<endl;
    else
        cout<<"Greater"<<endl;
}

int main(){    
        
        char A[]="Aniket Tarale";
        char B[]="Aniket Tarele";
        compare(A,B);
        return 0;


}
