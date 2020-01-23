// include header files

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

//function to calculate the discriminant

double root(double A,double B,double C){
        return pow(B,2)-4*A*C;
}

// main function
int main(){

    double A,B,C;

    cout<< "=======================================\n";
    cout<< "solving equations of the form Ax^2+Bx+C\n";
    cout<< "=======================================\n";

//collecting user input

    cout<<"\n";
    cout<<"Enter the coefficients:\n";
    cout<<"A=";
    cin>>A;
    cout<<"B=";
    cin>>B;
    cout<<"C=";
    cin>>C;


//calculating the roots of the quadratic equation

    if (root(A,B,C)<0){

    //if roots are imaginary

        cout<<"The roots are imaginary.\n";
        cout<<"NO Real roots. \n";
        cout<<"The imaginary roots are: \n";
        cout<<"root 1: "<<-B/(2*A)<<" + "<<sqrt(-root(A,B,C))/(2*A) <<"i\n";
        cout<<"root 2: "<<-B/(2*A)<<" - "<<sqrt(-root(A,B,C))/(2*A) <<"i\n";

    }

    else if(root(A,B,C)==0){

    //If only one root exist

        cout<<"There is only one root : "<< -B/(2*A)<<endl;

    }
    else if (root(A,B,C >0)){

    //If there exist two real roots

        cout <<"There are two real roots: \n";
        cout<<"root 1:"<<-B/(2*A)<<" + "<<sqrt(root(A,B,C))/(2*A)<<"\n";
        cout<<"root 2:"<<-B/(2*A)<<" - "<<sqrt(root(A,B,C))/(2*A)<<"\n";
    }

}
