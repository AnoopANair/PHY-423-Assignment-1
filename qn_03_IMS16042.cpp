
// include the header files

#include <iostream>
#include <vector>
#include <cmath>


using namespace std;


int main(){

// declaration of variables    

    int hun    = 100;
    int fif    = 50;
    int twen   = 20;
    int ten    = 10;
    int five   = 5;
    int two    = 2; 
    int one    = 1;
    int Rupees;
    int numhun  ;   
    int numfif  ;   
    int numtwen ;   
    int numten  ;   
    int numfive ;  
    int numtwo  ;   
    int numone  ;   
    
    cout<<"=================================================================\n";
    cout<<"a program for calculating the denominations of the entered amount\n";
    cout<<"=================================================================\n";

// collecting user input

    cout<< "Enter Amount in Rs :" ;
    cin >> Rupees;

// calculating the denominations
// calulating number of hundred rupee notes required

    numhun = Rupees/hun;

// calulating number of fifty rupee notes required

    numfif = Rupees%hun/fif;

// calulating number of twenty rupee notes required

    numtwen = (Rupees%hun)%fif/twen;

// calulating number of ten rupee notes required

    numten = ((Rupees%hun)%fif)%twen/ten;

// calulating number of five rupee coins required

    numfive = (((Rupees%hun)%fif)%twen)%ten/five;

// calulating number of two rupee coins required

    numtwo = ((((Rupees%hun)%fif)%twen)%ten)%five/two;

// calulating number of one rupee; coins required

    numone = (((((Rupees%hun)%fif)%twen)%ten)%five)%two/one;

// Display result;

    cout<<"There are:\n";;
    cout<< numhun  << " Note(s) of 100.00\n";
    cout<< numfif  << " Note(s) of 50.00\n";
    cout<< numtwen << " Note(s) of 20.00\n";
    cout<< numten  << " Note(s) of 10.00\n";
    cout<< numfive << " Note(s) of 5.00\n";
    cout<< numtwo  << " Note(s) of 2.00\n";
    cout<< numone  << " Note(s) of 1.00\n";


}