// include header files
#include <iostream>
#include <string>
using namespace std;

//main function
int main(){
string x;
int i=0;
    cout<<"=============================================\n";
    cout<<"a program to print a string in reverse order.\n";
    cout<<"=============================================\n";
//user input
    cout<<"Input a string to reverse : ";
    cin >> x;
//length of entry    
    while(true){
        if(x[i]=='\0'){ break; }
        i=i+1;
    }
//display result
    cout<<"Reversed string is: ";
    for(int j=i-1;j>=0;j--){
         cout<<x[j];
    }
    cout<<"\n";
    }