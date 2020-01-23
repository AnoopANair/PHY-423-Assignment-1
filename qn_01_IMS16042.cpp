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
    int counter;

    cout<<"===========================================================\n";
    cout<<"a program that accepts N integers and find the maximum of N\n";
    cout<<"===========================================================\n";

    cout<<"enter the number of integers to be compared : ";
    cin>>x;

    a = new int[x];

    for(int j=0;j<x;j++){

    cout<<"A("<<j+1<<") = ";
    cin>>a[j];


    }

    for(int j=0;j<x;j++){
        counter=0;
        for(int k=0;k<x;k++){
            if(a[j]<a[k]){
                counter = counter +1;
            }
        }
        if(counter==0){
            cout<<"The maximum of the array is : "<<a[j]<<"\n";
        }
    }


}