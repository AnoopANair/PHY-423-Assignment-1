
// include header files
#include <iostream>

using namespace std;

//main function
int main(){

// define and intialize variables and pointer arrays
    int x,f,k, counter=0;
    int *a;

    cout<<"=================================================\n";
    cout<<"a program to convert a decimal number into binary\n";
    cout<<"=================================================\n";
//user input
    cout<<"Enter a number to convert : ";
    cin>>x;
    k = x;
    f = x;
//for finding the number of steps of division operation needed to be performed
    while(f != 1){
            f= (f/2);
            counter=counter+1;
    }

//fixing the array length

    counter=counter+1; 

//defining the pointer array and allocating memory

    a = new int[(counter+1)];

//storing the remainder of each division  

    for(int i =0; i< counter; i++ ){
            a[i] = x%2;
            x = x/2;
    }

    cout<<"The Binary of "<<k<<" is ";

// reversing the array and displaying the result

    for(int i = (counter-1);i>=0;i--){
            cout<<a[i];
    }

    cout<<"\n";
}