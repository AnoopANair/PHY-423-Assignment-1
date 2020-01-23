// include header files
#include <iostream>
#include <string>
using namespace std;

//main function
int main(){

//define and initialize variables
    string x;
    int *a;
    int k=0,m,m1,i=0;
    
    cout<<"==========================================================\n";
    cout<<"a program to convert a binary number into a decimal number\n";
    cout<<"==========================================================\n";
//user input
    cout<<"Input a binary number :";
    cin >> x;
//length of entry    
    while(true){
        if(x[i]=='\0'){ break; }
        i=i+1;
    }
// define pointer array;  
    a = new int[i];
// calculation of decimal from binary
    for(int j=0; j<i;j++){
        m=1;
        m1=i-1-j;
        for(int l=0;l<m1;l++){ m=m*2;}
        a[j]=((int)x[j]-48)*(m);
    }

    for(int j=0; j<i;j++){
        k=k+a[j];
    }
// display result
    cout<<"The equivalent Decimal Number : "<<k<<"\n";
}