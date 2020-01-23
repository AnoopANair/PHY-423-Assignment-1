//include header files

#include <iostream>
#include <vector>
#include <cmath>


using namespace std;

//main function
int main(){

//define variables
    int *a;
    int x;
    int sum=0;

    cout<<"======================================================\n";
    cout<<"a program to calculate the factorial of a given number\n";
    cout<<"======================================================\n";
//user input
    cout<<"Input number of terms : ";
    cin>>x;

    a =  new int[x];
//generate even numbers
    for(int i=0;i<x;i++){
        a[i]=(i+1)*2;
    }
    
    cout<<"The even numbers are : ";
    
    for(int i=0;i<x;i++){
        cout<<a[i]<<" ";
    }
    
    cout<<"\n";
//sum of even numbers
    cout<<"The Sum of even Natural Number upto 5 terms : ";

    for(int i=0;i<x;i++){
        sum=sum+a[i];
    }

    cout<<sum<<"\n";
    

}