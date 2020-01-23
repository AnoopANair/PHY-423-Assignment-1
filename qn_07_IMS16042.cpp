//include header files

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

//main function

int main(){

// assign the symbols (asterisk{*} and space{ }) to the string variables

       string a = "*";
       string s = " ";

//define additional variables

       int x;


       cout<<"==============================================================\n";
       cout<<"program in C to make a pattern like a pyramid with an asterisk\n";
       cout<<"==============================================================\n";

//collecting user input

       cout <<"enter the height of the pyramid (in rows):";
       cin>>x;

//calculating the number of coloumns of the pyramid

       int total_col = 2*x + 1;

//algorithm for displaying the pyramid

       for(int i = 0 ; i<x ; i++){

       int l1 = (total_col-(2*i+1))/2;
       int l =l1;

       for(int j = 1 ; j<=total_col; j++){

              if((j==l+1) && (l<=total_col - l1)){

                     l=l+2;
                     cout<<a;}

              else{

                     cout<<s;}
              }

       cout<<"\n";
       }
}
