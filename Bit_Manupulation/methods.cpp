#include<bits/stdc++.h>
using namespace std;

int And(int a, int b){
    	return a&b;
}

int Or(int a, int b){
    return a|b;
}

int Xor(int a, int b){
    return a^b;
}

int negation(int a){
    return ~a;
}

int right_Shift(int n, int i){
    return n>>i;
}

int left_Shift(int n, int i){
    return n<<i;
}

int swap(int &x, int &y){
    x=x^y;
    y=x^y;
    x=x^y;
}

// Given n numbers print the XOR of all are (1-n)
int sum_Of_Xor(int x){
    if(x%4==0){
        return x;
    }
    if(x%4==1){
        return 1;
    }
    if(x%4==2){
        return x+1;
    }
    if(x%4==3){
        return 0;
    }
}

int get_Bit(int n, int i){
    if((1<<i)&n){
        return 1;
    }
    return 0;
}

bool test_Bit(int n, int i){
     if((1<<i)&n){
         return true;
     }
     return false;
}

void set_Bit(int &n,int i){
    n=(1<<i)|n;
}

void clear_Bit(int &n, int i){
    n=~(1<<i)&n;
}

void remove_Last_Bit(int &n){
    n=n&n-1;
}

bool isPowerOf_2(int n){
    if((n&(n-1))==0){
        return true;
    }
    return false;
}

int no_Of_Set_Bits(int n){
    int cnt=0;
/*
    First Approach

    while(n!=0){
        if(n&1==1){
            cnt++;
        }
        n=n>>1;
    }
*/

// second Approach

while(n!=0){
    n=n&n-1; // clear Last Bit
    cnt++;
}

    return cnt;
}






int main(){

    int a=7,b=8;

    cout<<"7&8= "<<And(7,8)<<endl;
    cout<<"7|8= "<<Or(7,8)<<endl;
    cout<<"7^8= "<<Xor(7,8)<<endl;
    cout<<"~7= "<<negation(7)<<endl;
    cout<<"8>>3= "<<right_Shift(8,3)<<endl;
    cout<<"1<<3= "<<left_Shift(1,3)<<endl;
    swap(a,b);
    cout<<"Swap a=7 & b=8 => a= "<<a<<" "<<"b= "<<b<<endl;
    swap(a,b); // a=7 and b=8
    
    cout<<"get 2rd bit of 8 "<<get_Bit(8,2)<<endl;
    cout<<"test 2nd bit of 8 "<<std::boolalpha<<test_Bit(8,2)<<endl;
    cout<<"set 2nd bit of 8 "<<endl;
    set_Bit(b,2);
    cout<<"After set b= "<<b<<endl;
    cout<<"clear 2nd bit of 8 "<<endl;
    clear_Bit(b,2);
    cout<<"After clear b= "<<b<<endl;
    cout<<"Remove last bit of 8"<<endl;
    remove_Last_Bit(b);
    cout<<"After removing last set bit= "<<b<<endl;
    cout<<"is 8 power of 2?= "<<isPowerOf_2(8)<<endl;
    cout<<"is 7 power of 2?= "<<isPowerOf_2(7)<<endl;
    cout<<"number of set bits in 16= "<<no_Of_Set_Bits(16)<<endl;
    cout<<"Number of set bits in 7= "<<no_Of_Set_Bits(7)<<endl;

    // Q1. consider N integers Every Integer appears twice and one Integer appears once

    array<int,11> arr{5,3,2,4,6,90,3,4,2,5,6};

    int Xor=0;
    for(auto x:arr){
        Xor^=x;
    }

    cout<<"Only One Integer= "<<Xor<<endl; // 90

    // Q2. given N numbers, print the XOR of all the given (1-N) Numbers
    int x;
    cout<<"Enter a number n to print the XOR of all the given N numbers "<<endl;
    cin>>x;
    
    if(x%4==0){
        cout<<x<<endl;
    }
    if(x%4==1){
        cout<<1<<endl;
    }
    if(x%4==2){
        cout<<x+1<<endl;
    }
    if(x%4==3){
        cout<<0<<endl;
    }

    // Q3. given range (L-R) print the XOR(L^L+1^L+2^..+R-1^R)
    int L,R;
    cout<<"Enter L and R: "<<endl;
    cin>>L>>R;
    int num=sum_Of_Xor(R)^sum_Of_Xor(L-1);
    cout<<"XOR of ("<<L<<"-"<<R<<") is= "<<num<<endl;

    // Q4. Check if a number is Odd or Even

    cout<<"check a Number: ";
    cin>>x;
    if((x&1)==0){
        cout<<"Even number"<<endl;
    }
    else{
        cout<<"Odd Number"<<endl;
    }


    // Q5. consider N integers every integer appears twice and only two integer appears once 

    array<int,8>arr2{1,2,3,4,5,4,2,1};

    int Xor1=0;
    for(auto x:arr2){
        Xor1^=x;
    }

    int cnt=0;
    while(Xor1){
        if(Xor1&1){
            break;
        }
        cnt++;
       Xor1=Xor1>>1;
    }

    int Xor2=0,Xor3=0;
    for(auto x:arr2){
        if(x&(1<<cnt)){
            Xor2^=x;
        }
        else{
            Xor3^=x;
        }
    }

    cout<<"Only two integers that appears once= "<<Xor2<<" and "<<Xor3<<endl;

    // Q6. Generating all the subsets

    array<int,4>arr3{4,3,1,4};
    int  n=arr3.size();
    vector<vector<int>>ds; // 2d Vector
    for(int i=0;i<(1<<n);i++){
        vector<int> sub; // 1d Vector
        for(int j=0;j<n;j++){
            if(i&1<<j){
                sub.emplace_back(arr3[j]);
            }
        }
        ds.emplace_back(sub);
    }

    for(auto x:ds){
        cout<<"{ ";
        for(auto y:x){
            cout<<y<<" ";  
        }
        cout<<"}"<<endl;
    }

    // Q7. Given N integer print the XOR of all subsets
    // Ans: XOR of all subset is always is zero 
    // except with 1 element set

    return 0;
}   
