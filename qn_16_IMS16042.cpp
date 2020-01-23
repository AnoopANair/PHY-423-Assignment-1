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
    cout<<"a program that accepts N integers and find the maximum  and minimum of N\n";
    cout<<"===========================================================\n";
//user input
    cout<<"Input the number of elements to be stored in the array : ";
    cin>>x;

    a = new int[x];

//enter the element values
    cout<<"Input "<<x<<" elements in the array :\n";
    for(int j=0;j<x;j++){

    cout<<"element - "<<j+1<<" :  ";
    cin>>a[j];


    }
// finding the maximum
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

//finding the minimum 
    for(int j=0;j<x;j++){
        counter=0;
        for(int k=0;k<x;k++){
            if(a[j]>a[k]){
                counter = counter +1;
            }
        }
        if(counter==0){
            cout<<"The minimum of the array is : "<<a[j]<<"\n";
        }
    }


}