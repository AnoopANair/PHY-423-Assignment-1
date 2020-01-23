// include header files
#include <iostream>
#include <string>
using namespace std;

//main function
int main(){

//define and initialize variables
    int *a;
    int x;
    cout<<"=================================================================================\n";
    cout<<"a program to read n number of values in an array and display it in reverse order.\n";
    cout<<"=================================================================================\n";
//user input  
    cout<<"Input the number of elements to store in the array : ";
    cin>>x;
//define pointer array
    a =new int[x];
    cout<<"The values store into the array are : \n";
//user input for array element values
    for(int k =0 ; k<x;k++){
        cout<<"A["<<k+1<<"] = ";
        cin>>a[k];
    }
//displaying the output
    cout<<"The values store into the array in reverse are : ";
    for(int k=x-1; k >=0;k--){
        cout<<a[k]<<" ";
    }
    cout<<"\n";

    }