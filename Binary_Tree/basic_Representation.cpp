#include<iostream>
using namespace std;

int main(){
    char A[]={'A','B','C','D','0','E','0'};
    int len=sizeof(A)/sizeof(A[0]);

/*
        A
    B       C
D      0|E      0     

*/

    for(int i=0;i<len/2;i++){
        cout<<"Parent= "<<A[i]<<endl;
        cout<<"lChild= "<<A[2*i+1]<<endl;
        cout<<"rChild= "<<A[2*i+2]<<endl;
        cout<<"-=-=-=-=-=-=-=-=-=-=-=-=-=-"<<endl;
    }

    return 0;




}
