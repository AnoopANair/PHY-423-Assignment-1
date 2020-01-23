// include header files
#include <iostream>
#include <string>
using namespace std;

//main function
int main(){

//define and initialize variables
    string x;
    int i=0;
    cout<<"========================================\n";
    cout<<"a program to find the length of a string\n";
    cout<<"========================================\n";
//user input
    cout<<"Input a string : ";
    cin >> x;
//length of string    
    while(true){
        if(x[i]=='\0'){ break; }
        i=i+1;
    }
//display result
    cout<<"The string contains "<<i<< " number of characters.\n";
    cout<<"So, the length of the string welcome is : "<< i<<"\n";

    }