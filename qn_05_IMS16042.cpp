//include header files

#include <iostream>
#include <cmath>

using namespace std;

// function to calculate the cube of the parameter

int cube(int x){
    return pow(x,3);
}

// main function

int main(){

//define variables

    int x;


    cout<<"===============================================================\n";
    cout<<"program to display the cube of the number upto given an integer\n";
    cout<<"===============================================================\n";

//user input

    cout<<"enter a number: ";
    cin>>x;

// output the result

    for(int i=1;i<=x;i++){
        cout<<"Number is : "<< i<< " and the cube of the "<<i<<" is : "<<cube(i)<<"\n";
    }

}
