// include  header files
#include <iostream>
#include <cmath>


using namespace std;

//main function 

int main(){

// define variables
    int x;


    cout<<"===============================================================\n";
    cout<<"program to display the multiplication table of a given integer.\n";
    cout<<"===============================================================\n";

// collect user input
    cout<<"Input the number (Table to be calculated) : ";
    cin>>x;

// display the multiplication table
    for(int i =1;i<=10;i++){
    cout<<x<<" x "<<i<<" = "<<x*i <<"\n";
    }

}
